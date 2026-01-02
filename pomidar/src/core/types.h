#pragma once
#include <cstdint>
#include <string>

struct Vector3 {
    float x = 0.f;
    float y = 0.f;
    float z = 0.f;
};

struct PlayerInfo {
    int index = 0;
    std::uintptr_t address = 0;
    std::string className;
    Vector3 position;
    int health = 0;
    int team = 0;
};
