#pragma once
#include <windows.h>
#include <cstdint>

namespace win {

    DWORD GetProcessIdByName(const wchar_t* processName);
    std::uintptr_t GetModuleBaseAddress(DWORD processId, const wchar_t* moduleName);

    // wrapper for handle
    class ProcessHandle {
    public:
        ProcessHandle() = default;
        explicit ProcessHandle(HANDLE h) : handle_(h) {}
        ~ProcessHandle() { close(); }

        ProcessHandle(const ProcessHandle&) = delete;
        ProcessHandle& operator=(const ProcessHandle&) = delete;

        ProcessHandle(ProcessHandle&& other) noexcept : handle_(other.handle_) { other.handle_ = nullptr; }
        ProcessHandle& operator=(ProcessHandle&& other) noexcept {
            if (this != &other) {
                close();
                handle_ = other.handle_;
                other.handle_ = nullptr;
            }
            return *this;
        }

        HANDLE get() const { return handle_; }
        explicit operator bool() const { return handle_ != nullptr; }

    private:
        void close() {
            if (handle_) {
                ::CloseHandle(handle_);
                handle_ = nullptr;
            }
        }

        HANDLE handle_{ nullptr };
    };

} // namespace win
