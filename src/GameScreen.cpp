#include "GameScreen.hpp"

void processGameScreen(Window gameWindow){
    Game g(20,20);
    InitWindow(gameWindow.getWidth(),gameWindow.getHeight(),gameWindow.getTitle().c_str());

    SetTargetFPS(60);

    gameWindow.loadFonts();

    while(!WindowShouldClose()){
        int cMouseX = GetMouseX();
        int cMouseY = GetMouseY();
        gameScreenDraw(cMouseX,cMouseY);
    }
    CloseWindow();
}

void gameScreenDraw(int cMouseX, int cMouseY){
    BeginDrawing();

    ClearBackground(backgroundC);

    EndDrawing();
}