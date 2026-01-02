#pragma once
#include <windows.h>
#include <string>
#include <cstdint>

namespace mem {

    template<typename T>
    T Read(HANDLE process, std::uintptr_t address) {
        T value{};
        SIZE_T bytesRead{};
        ::ReadProcessMemory(process, reinterpret_cast<LPCVOID>(address), &value, sizeof(T), &bytesRead);
        return value;
    }

    inline std::string ReadString(HANDLE process, std::uintptr_t address, size_t maxLength = 128) {
        std::string result;
        result.resize(maxLength, '\0');

        SIZE_T bytesRead{};
        ::ReadProcessMemory(process, reinterpret_cast<LPCVOID>(address), result.data(), maxLength - 1, &bytesRead);

        result.resize(result.find('\0'));
        return result;
    }

} // namespace mem
