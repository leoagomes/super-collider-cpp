#include <raylib-cpp.hpp>
#include <entt/entt.hpp>

class Game {
public:
    entt::registry registry;
};

namespace components {
    struct Position {
        Vector3 value;
    };
}

int main() {
    int screen_width = 800;
    int screen_height = 600;

    InitWindow(screen_width, screen_height, "Super Collider");
    SetTargetFPS(60);

    Game game;
    const auto player = game.registry.create();
    game.registry.emplace<components::Position>(player, Vector3{0, 0, 0});

    while (!WindowShouldClose()) {
        const auto delta_time = GetFrameTime();

        BeginDrawing();
        ClearBackground(BLACK);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}