#include "Game.hpp"

Game::Game(){

}

Game::Game(int gridRows, int gridCols){
    this->gridRows = gridRows;
    this->gridCols = gridCols;
    this->gameGrid = createGrid(gridRows, gridCols);
    this->win = 0;
}

int** Game::createGrid(int rows, int cols){
    int** board = new int*[rows];
    for(int y = 0; y < rows; y++){
        board[y] = new int[cols];
        for(int x = 0; x < cols; x++){
            board[x][y] = 0;
        }
    }
    return board;
}

int Game::getGridRows(){
    return this->gridRows;
}

int Game::getGridCols(){
    return this->gridCols;
}

bool Game::getWin(){
    return this->win;
}

void Game::setWin(bool newWin){
    this->win = newWin;
}