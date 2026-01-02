#pragma once
#include <Windows.h>
#include <vector>
#include <mutex>
#include <atomic>
#include <cstdint>
#include "types.h"
#include "graphics.h"

namespace app {

    struct GameConnection {
        HANDLE process = nullptr;
        std::uintptr_t clientBase = 0;

        explicit operator bool() const { return process && clientBase; }
    };

    struct State {
        graphics::D3D11State gfx;
        graphics::Texture mapTexture;
        GameConnection game;
        HWND window = nullptr;

        std::mutex playerMutex;
        std::vector<PlayerInfo> players;
        std::atomic<bool> running{ true };
    };

    // attempt to connect to the game process
    bool connectToGame(GameConnection& conn);

    // start the background player reader thread
    void startReaderThread(State& state);

    std::vector<PlayerInfo> getPlayerSnapshot(State& state);

}
