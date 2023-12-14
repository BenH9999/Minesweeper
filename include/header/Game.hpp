#pragma once

#include "Window.hpp"

const int cellSize = 10;

class Game{
    public:
        Game();
        Game(int gridRows, int gridCols);

        int** createGrid(int rows, int cols);

        int getGridRows();
        int getGridCols();
        bool getWin();

        void setWin(bool newWin);
    private:
        int gridRows;
        int gridCols;
        int** gameGrid;
        bool win;
};