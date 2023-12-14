#include "MainMenu.hpp"

Window mainMenuWindow(1000,800,"Main Menu");
Window GameWindow;

void processMainMenu(){
    bool runGame = 0;

    InitWindow(mainMenuWindow.getWidth(),mainMenuWindow.getHeight(),mainMenuWindow.getTitle().c_str());

    SetTargetFPS(60);

    mainMenuWindow.loadFonts();

    while(!WindowShouldClose()){
        int cMouseX = GetMouseX();
        int cMouseY = GetMouseY();
        mainMenuDraw(runGame, cMouseX,cMouseY);
        
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && cMouseX >= 375 && cMouseX <= 595 && cMouseY >= 285 && cMouseY <= 385){
            runGame = 1;
        }

        if(runGame){
            CloseWindow();
            break;
        }
    }
    if(runGame){
        runGame = 0;
        GameWindow = Window(500,500,"Minesweeper");
        processGameScreen(GameWindow);
    }
    CloseWindow();
}

void mainMenuDraw(bool &runGame, int cMouseX,int cMouseY){
    BeginDrawing();

    ClearBackground(backgroundC);
    DrawTextEx(mainMenuWindow.MCF, "Minesweeper", {170,120}, 100, 0, BLACKTEXT);

    if(cMouseX >= 375 && cMouseX <= 595 && cMouseY >= 285 && cMouseY <= 385){
        DrawRectangle(375,285,220,100,HOVER);
    }
    DrawRectangleLines(375,285,220,100,BLACKTEXT);
    DrawTextEx(mainMenuWindow.MCF, "Play", {400,300},80,0,BLACKTEXT);

    EndDrawing();
}