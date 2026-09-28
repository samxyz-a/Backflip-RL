#include "raylib.h"

#define SCREEN_WIDTH 1024
#define SCREEN_HEIGHT 720



//bone structure definition
struct Bone{
    int position;
    float orientation;
    float linV,angV;
    int mass;
    
};






int main() {
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "My Model");

    while (!WindowShouldClose()) {
        BeginDrawing();

        ClearBackground(RAYWHITE);
        //DrawText("Hello Raylib!", 300, 280, 20, BLACK);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}


