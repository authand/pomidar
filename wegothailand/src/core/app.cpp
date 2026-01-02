#include "app.h"
#include "config.h"
#include "win/processutil.h"
#include "game/reader.h"

namespace app {

    bool connectToGame(GameConnection& conn) {
        DWORD pid = win::GetProcessIdByName(config::GAME_PROCESS());
        if (!pid) return false;

        conn.process = ::OpenProcess(PROCESS_VM_READ | PROCESS_QUERY_INFORMATION, FALSE, pid);
        if (!conn.process) return false;

        conn.clientBase = win::GetModuleBaseAddress(pid, config::CLIENT_MODULE());
        if (!conn.clientBase) {
            ::CloseHandle(conn.process);
            conn.process = nullptr;
            return false;
        }

        return true;
    }

    void startReaderThread(State& state) {
        CreateThread(nullptr, 0, [](LPVOID param) -> DWORD {
            auto* s = static_cast<State*>(param);

            while (s->running) {
                auto fresh = game::ReadPlayersViaControllers(s->game.process, s->game.clientBase);
                {
                    std::lock_guard<std::mutex> lock(s->playerMutex);
                    s->players = std::move(fresh);
                }
                Sleep(static_cast<DWORD>(config::UPDATE_INTERVAL_MS()));
            }
            return 0;
        }, &state, 0, nullptr);
    }

    std::vector<PlayerInfo> getPlayerSnapshot(State& state) {
        std::lock_guard<std::mutex> lock(state.playerMutex);
        return state.players;
    }

}
