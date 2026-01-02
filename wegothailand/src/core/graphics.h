#pragma once
#include <d3d11.h>
#include <Windows.h>

namespace graphics {

    struct D3D11State {
        ID3D11Device* device = nullptr;
        ID3D11DeviceContext* context = nullptr;
        IDXGISwapChain* swapChain = nullptr;
        ID3D11RenderTargetView* renderTarget = nullptr;
    };

    struct Texture {
        ID3D11ShaderResourceView* srv = nullptr;
        int width = 0;
        int height = 0;

        void release();
        explicit operator bool() const { return srv != nullptr; }
    };

    bool createDevice(HWND hwnd, D3D11State& state);
    void destroyDevice(D3D11State& state);
    void createRenderTarget(D3D11State& state);
    void destroyRenderTarget(D3D11State& state);

    // resizes swap chain buffers and recreates render target
    void handleResize(D3D11State& state, UINT width, UINT height);

    void beginFrame(D3D11State& state);
    void endFrame(D3D11State& state);

}
