#ifdef BUILD_SERVER
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#include <WinSock2.h>
#endif

#include <Windows.h>
#include <tchar.h>
#include <cstdio>

#include "core/config.h"
#include "core/app.h"
#include "game/reader.h"

#ifdef BUILD_LOCAL
#include "core/graphics.h"
#include "ui/radar.h"
#include "ui/texture_loader.h"
#include "imgui/imgui.h"
#include "imgui/backends/imgui_impl_win32.h"
#include "imgui/backends/imgui_impl_dx11.h"
#endif

#ifdef BUILD_SERVER
#include "net/server.h"
#endif


// LOCAL MODE - imgui
#ifdef BUILD_LOCAL

static app::State g_state;

extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND, UINT, WPARAM, LPARAM);

static LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam) {
    if (ImGui_ImplWin32_WndProcHandler(hWnd, msg, wParam, lParam))
        return true;

    switch (msg) {
    case WM_SIZE:
        if (g_state.gfx.device && wParam != SIZE_MINIMIZED) {
            graphics::handleResize(g_state.gfx, LOWORD(lParam), HIWORD(lParam));
        }
        return 0;
    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;
    }
    return DefWindowProc(hWnd, msg, wParam, lParam);
}

static HWND createWindow(HINSTANCE hInstance, int clientW, int clientH) {
    WNDCLASSEX wc{};
    wc.cbSize = sizeof(WNDCLASSEX);
    wc.style = CS_CLASSDC;
    wc.lpfnWndProc = WndProc;
    wc.hInstance = hInstance;
    wc.lpszClassName = _T("Pomidar");
    RegisterClassEx(&wc);

    RECT r{ 0, 0, clientW, clientH };
    AdjustWindowRectEx(&r, WS_OVERLAPPEDWINDOW, FALSE, 0);

    return CreateWindow(
        wc.lpszClassName, _T("Pomidar"),
        WS_OVERLAPPEDWINDOW,
        100, 100,
        r.right - r.left, r.bottom - r.top,
        nullptr, nullptr, hInstance, nullptr
    );
}

static bool initImGui(HWND hwnd, graphics::D3D11State& gfx) {
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGui_ImplWin32_Init(hwnd);
    ImGui_ImplDX11_Init(gfx.device, gfx.context);
    return true;
}

static void shutdownImGui() {
    ImGui_ImplDX11_Shutdown();
    ImGui_ImplWin32_Shutdown();
    ImGui::DestroyContext();
}

static void renderHUD(app::State& state) {
    ImGuiWindowFlags flags =
        ImGuiWindowFlags_NoTitleBar |
        ImGuiWindowFlags_NoResize |
        ImGuiWindowFlags_NoMove |
        ImGuiWindowFlags_NoCollapse |
        ImGuiWindowFlags_NoScrollbar |
        ImGuiWindowFlags_NoScrollWithMouse;

    ImVec2 radarSize(static_cast<float>(config::RADAR_WIDTH()), static_cast<float>(config::RADAR_HEIGHT()));
    ImVec2 hudPos(static_cast<float>(config::WINDOW_PADDING()), static_cast<float>(config::WINDOW_PADDING()));
    ImVec2 hudSize(static_cast<float>(config::RADAR_WIDTH()), static_cast<float>(config::RADAR_HEIGHT()));

    ImGui::SetNextWindowPos(hudPos, ImGuiCond_Always);
    ImGui::SetNextWindowSize(hudSize, ImGuiCond_Always);

    ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, ImVec2(0, 0));
    ImGui::PushStyleVar(ImGuiStyleVar_WindowBorderSize, 0.0f);
    ImGui::PushStyleVar(ImGuiStyleVar_WindowRounding, 12.0f);

    ImGui::Begin("HUD", nullptr, flags);

    auto players = app::getPlayerSnapshot(state);
    auto localPlayer = game::ReadLocalPlayer(state.game.process, state.game.clientBase);

    ui::RenderRadar(
        "##Radar",
        config::MAP_MIN_X(), config::MAP_MIN_Y(), config::MAP_MAX_X(), config::MAP_MAX_Y(),
        players, localPlayer, radarSize,
        reinterpret_cast<ImTextureID>(state.mapTexture.srv)
    );

    ImGui::End();
    ImGui::PopStyleVar(3);
}

static bool loadMapTexture(graphics::D3D11State& gfx, graphics::Texture& tex) {
    char cwd[MAX_PATH]{};
    GetCurrentDirectoryA(MAX_PATH, cwd);
    std::string path = std::string(cwd) + "\\map.png";

    return LoadTextureFromFile_D3D11(gfx.device, path.c_str(), &tex.srv, &tex.width, &tex.height);
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE, LPSTR, int) {
    // Load config (creates default if missing)
    if (!config::load()) {
        config::createDefault();
        config::load();
    }

    if (!app::connectToGame(g_state.game)) {
        MessageBox(nullptr, _T("Failed to connect to game"), _T("Error"), MB_OK);
        return 1;
    }

    const int clientW = config::RADAR_WIDTH() + config::WINDOW_PADDING() * 2;
    const int clientH = config::RADAR_HEIGHT() + config::WINDOW_PADDING() * 2;

    g_state.window = createWindow(hInstance, clientW, clientH);
    if (!g_state.window) return 1;

    if (!graphics::createDevice(g_state.window, g_state.gfx)) {
        MessageBox(nullptr, _T("Failed to create D3D11 device"), _T("Error"), MB_OK);
        return 1;
    }

    ShowWindow(g_state.window, SW_SHOWDEFAULT);
    UpdateWindow(g_state.window);

    if (config::ALWAYS_ON_TOP()) {
        SetWindowPos(g_state.window, HWND_TOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE | SWP_NOACTIVATE);
    }

    loadMapTexture(g_state.gfx, g_state.mapTexture);
    initImGui(g_state.window, g_state.gfx);
    app::startReaderThread(g_state);

    MSG msg{};
    while (msg.message != WM_QUIT) {
        if (PeekMessage(&msg, nullptr, 0U, 0U, PM_REMOVE)) {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
            continue;
        }

        ImGui_ImplDX11_NewFrame();
        ImGui_ImplWin32_NewFrame();
        ImGui::NewFrame();

        renderHUD(g_state);

        ImGui::Render();
        graphics::beginFrame(g_state.gfx);
        ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
        graphics::endFrame(g_state.gfx);
    }

    g_state.running = false;
    shutdownImGui();
    g_state.mapTexture.release();
    graphics::destroyDevice(g_state.gfx);
    DestroyWindow(g_state.window);

    return 0;
}

#endif // BUILD_LOCAL


// SERVER MODE - websocket server for cloud radar
#ifdef BUILD_SERVER

int main() {
    printf("=== Pomidar ===\n\n");

    if (!config::load()) {
        config::createDefault();
        config::load();
    }

    app::GameConnection game;
    if (!app::connectToGame(game)) {
        printf("[-] failed to connect to game. is deadlock open?\n");
        return 1;
    }
    printf("Connected to game.\n");

    net::RadarServer server;
    if (!server.start()) {
        printf("[-] failed to start server.\n");
        return 1;
    }

    printf("server started!\n");
    printf("  URL:  http://localhost:%d\n", config::SERVER_PORT());
    printf("  Map:  %s\n", server.mapLoaded() ? "loaded" : "NOT FOUND (place map.png in exe directory)");
    printf("\nfor remote access, use ngrok:\n");
    printf("  ngrok http %d\n\n", config::SERVER_PORT());
    printf("press ctrl+c to stop.\n\n");

    while (true) {
        auto players = game::ReadPlayersViaControllers(game.process, game.clientBase);
        auto localPlayer = game::ReadLocalPlayer(game.process, game.clientBase);

        server.broadcast(players, localPlayer);

        printf("\rplayers: %2zu | clients: %2zu", players.size(), server.clientCount());

        Sleep(config::UPDATE_INTERVAL_MS());
    }

    server.stop();
    return 0;
}

#endif // BUILD_SERVER
