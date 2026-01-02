#include "graphics.h"
#include <dxgi.h>

#pragma comment(lib, "d3d11.lib")
#pragma comment(lib, "dxgi.lib")

namespace graphics {

    void Texture::release() {
        if (srv) {
            srv->Release();
            srv = nullptr;
        }
        width = height = 0;
    }

    bool createDevice(HWND hwnd, D3D11State& state) {
        DXGI_SWAP_CHAIN_DESC sd{};
        sd.BufferCount = 2;
        sd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
        sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
        sd.OutputWindow = hwnd;
        sd.SampleDesc.Count = 1;
        sd.Windowed = TRUE;
        sd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;

        UINT flags = 0;
#ifdef _DEBUG
        flags |= D3D11_CREATE_DEVICE_DEBUG;
#endif

        D3D_FEATURE_LEVEL level;
        const D3D_FEATURE_LEVEL levels[] = { D3D_FEATURE_LEVEL_11_0 };

        HRESULT hr = D3D11CreateDeviceAndSwapChain(
            nullptr, D3D_DRIVER_TYPE_HARDWARE, nullptr,
            flags, levels, 1, D3D11_SDK_VERSION,
            &sd, &state.swapChain, &state.device, &level, &state.context
        );

        if (FAILED(hr)) return false;

        createRenderTarget(state);
        return true;
    }

    void destroyDevice(D3D11State& state) {
        destroyRenderTarget(state);
        if (state.swapChain) { state.swapChain->Release(); state.swapChain = nullptr; }
        if (state.context) { state.context->Release(); state.context = nullptr; }
        if (state.device) { state.device->Release(); state.device = nullptr; }
    }

    void createRenderTarget(D3D11State& state) {
        ID3D11Texture2D* backBuffer = nullptr;
        state.swapChain->GetBuffer(0, IID_PPV_ARGS(&backBuffer));
        state.device->CreateRenderTargetView(backBuffer, nullptr, &state.renderTarget);
        backBuffer->Release();
    }

    void destroyRenderTarget(D3D11State& state) {
        if (state.renderTarget) {
            state.renderTarget->Release();
            state.renderTarget = nullptr;
        }
    }

    void handleResize(D3D11State& state, UINT width, UINT height) {
        destroyRenderTarget(state);
        state.swapChain->ResizeBuffers(0, width, height, DXGI_FORMAT_UNKNOWN, 0);
        createRenderTarget(state);
    }

    void beginFrame(D3D11State& state) {
        const float clearColor[4] = { 0.f, 0.f, 0.f, 1.f };
        state.context->OMSetRenderTargets(1, &state.renderTarget, nullptr);
        state.context->ClearRenderTargetView(state.renderTarget, clearColor);
    }

    void endFrame(D3D11State& state) {
        state.swapChain->Present(1, 0);
    }

}
