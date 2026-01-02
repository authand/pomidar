#include "ProcessUtil.h"
#include <tlhelp32.h>
#include <iostream>

namespace win {

    DWORD GetProcessIdByName(const wchar_t* processName) {
        DWORD processId = 0;
        HANDLE snapshot = ::CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
        if (snapshot == INVALID_HANDLE_VALUE) return 0;

        PROCESSENTRY32W pe{};
        pe.dwSize = sizeof(pe);

        if (::Process32FirstW(snapshot, &pe)) {
            do {
                if (_wcsicmp(pe.szExeFile, processName) == 0) {
                    processId = pe.th32ProcessID;
                    break;
                }
            } while (::Process32NextW(snapshot, &pe));
        }

        ::CloseHandle(snapshot);
        return processId;
    }

    std::uintptr_t GetModuleBaseAddress(DWORD processId, const wchar_t* moduleName) {
        std::uintptr_t moduleBase = 0;
        HANDLE snapshot = ::CreateToolhelp32Snapshot(TH32CS_SNAPMODULE | TH32CS_SNAPMODULE32, processId);
        if (snapshot == INVALID_HANDLE_VALUE) return 0;

        MODULEENTRY32W me{};
        me.dwSize = sizeof(me);

        if (::Module32FirstW(snapshot, &me)) {
            do {
                if (_wcsicmp(me.szModule, moduleName) == 0) {
                    moduleBase = reinterpret_cast<std::uintptr_t>(me.modBaseAddr);
                    break;
                }
            } while (::Module32NextW(snapshot, &me));
        }

        ::CloseHandle(snapshot);
        return moduleBase;
    }

} // namespace win
