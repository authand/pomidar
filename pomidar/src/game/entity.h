#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include "core/types.h"

namespace game {

	std::uintptr_t GetEntityByIndex(HANDLE process, std::uintptr_t entityList, int index);
	std::string GetClassName(HANDLE process, std::uintptr_t entity);
	Vector3 GetEntityPosition(HANDLE process, std::uintptr_t entity);

} // namespace game
