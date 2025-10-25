#include <raylib.h>
#include <iostream>
#include "game.h"
using namespace std;

int main() {
    Color darkBlue = {44, 44, 127, 255};
    InitWindow(300, 600, "raylib Tetris");
    SetTargetFPS(60);
    Game game = Game();
    while (!WindowShouldClose()) {
        game.HandleInput();
        BeginDrawing();
        ClearBackground(darkBlue);
        game.Draw();
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
