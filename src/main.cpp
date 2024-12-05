#include <raylib.h>

int main() {
    InitWindow(800, 600, "Hello, World!");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BLACK);
        EndDrawing();
    }

    return 0;
}