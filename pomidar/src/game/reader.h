#pragma once
#include <Windows.h>
#include <vector>
#include <cstdint>
#include "core/types.h"

namespace game {

	std::vector<PlayerInfo> ReadPlayersViaControllers(HANDLE process, std::uintptr_t clientDll);
	PlayerInfo ReadLocalPlayer(HANDLE process, std::uintptr_t clientDll);

} // namespace game
