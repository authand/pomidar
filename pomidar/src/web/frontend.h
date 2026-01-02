#pragma once
#include <string>
#include "core/config.h"

namespace web {

    // ai generated frontend
    inline std::string getFrontendHtml(int wsPort) {
        return R"html(
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Pomidar</title>
    <style>
        * { margin: 0; padding: 0; box-sizing: border-box; }
        body {
            background: linear-gradient(135deg, #1a0a0a 0%, #2d1010 50%, #1a0808 100%);
            min-height: 100vh;
            display: flex;
            justify-content: center;
            align-items: center;
            font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, sans-serif;
            color: #fff;
        }
        .container {
            display: flex;
            flex-direction: column;
            align-items: center;
            gap: 16px;
        }
        .title {
            font-size: 28px;
            font-weight: 700;
            color: #ff6347;
            text-shadow: 0 0 20px rgba(255,99,71,0.5);
            letter-spacing: 2px;
        }
        .radar {
            position: relative;
            width: min(90vw, 600px);
            height: min(90vw, 600px);
            background: #1a0a0a;
            border-radius: 12px;
            border: 1px solid rgba(255,99,71,0.3);
            box-shadow: 0 0 30px rgba(255,99,71,0.15);
            overflow: hidden;
        }
        .radar-bg {
            position: absolute;
            top: 0; left: 0;
            width: 100%;
            height: 100%;
            object-fit: cover;
            opacity: 0.8;
        }
        .radar-overlay {
            position: absolute;
            top: 0; left: 0;
            width: 100%;
            height: 100%;
            background: rgba(0,0,0,0.15);
        }
        .player {
            position: absolute;
            width: 12px;
            height: 12px;
            border-radius: 50%;
            transform: translate(-50%, -50%);
            transition: left 0.05s linear, top 0.05s linear;
            box-shadow: 0 0 8px currentColor;
        }
        .player.self { background: #fff; color: #fff; box-shadow: 0 0 0 2px #000, 0 0 8px #fff; }
        .player.teammate { background: #0f0; color: #0f0; box-shadow: 0 0 0 2px #000, 0 0 8px #0f0; }
        .player.enemy { background: #f00; color: #f00; box-shadow: 0 0 0 2px #000, 0 0 8px #f00; }
        .player.dead { background: #888; color: #888; opacity: 0.5; }
        .status {
            display: flex;
            align-items: center;
            gap: 8px;
            font-size: 14px;
            color: #cc8070;
        }
        .status-dot {
            width: 8px;
            height: 8px;
            border-radius: 50%;
            background: #ff6347;
        }
        .status-dot.connected { background: #6fbf6f; }
        .legend {
            display: flex;
            gap: 16px;
            font-size: 12px;
            color: #cc8070;
        }
        .legend-item {
            display: flex;
            align-items: center;
            gap: 4px;
        }
        .legend-dot {
            width: 10px;
            height: 10px;
            border-radius: 50%;
        }
    </style>
</head>
<body>
    <div class="container">
        <div class="title">Pomidar</div>
        <div class="radar" id="radar">
            <img class="radar-bg" id="radar-bg" src="/map.png" alt="" />
            <div class="radar-overlay"></div>
        </div>
        <div class="status">
            <div class="status-dot" id="status-dot"></div>
            <span id="status-text">Connecting...</span>
        </div>
        <div class="legend">
            <div class="legend-item"><div class="legend-dot" style="background:#fff; box-shadow: 0 0 0 1px #000;"></div>You</div>
            <div class="legend-item"><div class="legend-dot" style="background:#0f0"></div>Team</div>
            <div class="legend-item"><div class="legend-dot" style="background:#f00"></div>Enemy</div>
        </div>
    </div>

    <script>
        const MAP_BOUNDS = {
            minX: )html" + std::to_string(config::MAP_MIN_X()) + R"html(,
            maxX: )html" + std::to_string(config::MAP_MAX_X()) + R"html(,
            minY: )html" + std::to_string(config::MAP_MIN_Y()) + R"html(,
            maxY: )html" + std::to_string(config::MAP_MAX_Y()) + R"html(
        };

        const radar = document.getElementById('radar');
        const statusDot = document.getElementById('status-dot');
        const statusText = document.getElementById('status-text');
        const players = new Map();

        function worldToRadar(x, y) {
            const nx = (x - MAP_BOUNDS.minX) / (MAP_BOUNDS.maxX - MAP_BOUNDS.minX);
            const ny = 1 - (y - MAP_BOUNDS.minY) / (MAP_BOUNDS.maxY - MAP_BOUNDS.minY);
            return {
                x: Math.max(0, Math.min(100, nx * 100)),
                y: Math.max(0, Math.min(100, ny * 100))
            };
        }

        function updatePlayer(data) {
            let el = players.get(data.index);
            if (!el) {
                el = document.createElement('div');
                el.className = 'player';
                radar.appendChild(el);
                players.set(data.index, el);
            }

            const pos = worldToRadar(data.x, data.y);
            el.style.left = pos.x + '%';
            el.style.top = pos.y + '%';

            el.className = 'player';
            if (data.dead) {
                el.classList.add('dead');
            } else if (data.self) {
                el.classList.add('self');
            } else if (data.enemy) {
                el.classList.add('enemy');
            } else {
                el.classList.add('teammate');
            }
        }

        function connect() {
            // Use same host/port as page, auto-detect ws/wss based on http/https
            const protocol = window.location.protocol === 'https:' ? 'wss:' : 'ws:';
            const host = window.location.host || 'localhost:)html" + std::to_string(wsPort) + R"html(';
            const wsUrl = `${protocol}//${host}/ws`;
            console.log('Connecting to:', wsUrl);
            const ws = new WebSocket(wsUrl);

            ws.onopen = () => {
                statusDot.classList.add('connected');
                statusText.textContent = 'Connected';
            };

            ws.onmessage = (event) => {
                try {
                    const data = JSON.parse(event.data);
                    
                    // Clear old players not in current update
                    const currentIndices = new Set(data.players.map(p => p.index));
                    for (const [index, el] of players) {
                        if (!currentIndices.has(index)) {
                            el.remove();
                            players.delete(index);
                        }
                    }

                    // Update players
                    data.players.forEach(p => updatePlayer(p));
                    
                    statusText.textContent = `Connected (${data.players.length} players)`;
                } catch (e) {
                    console.error('Parse error:', e);
                }
            };

            ws.onclose = () => {
                statusDot.classList.remove('connected');
                statusText.textContent = 'Disconnected - Reconnecting...';
                setTimeout(connect, 2000);
            };

            ws.onerror = (e) => {
                console.error('WebSocket error:', e);
                ws.close();
            };
        }

        connect();
    </script>
</body>
</html>
)html";
    }

}
