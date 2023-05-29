#ifndef BOARD_H
#define BOARD_H
#include <iostream>
#include "Tile.h"
#include "Snake.h"
#include "Ladder.h"
#include <vector>

const int MAX_LENGTH = 100;
const int MAX_SNAKES = 10;
const int MAX_LADDERS = 10;

class Board {
    
    private:
        int boardSize;
        int numSnakes;
        int numLadders;
        char board[MAX_LENGTH]; // Uses chars to represent snakes "S", ladders "L", and regular Tiles "T"
        int snakes[MAX_SNAKES];
        int ladders[MAX_LADDERS];
        Ladder ladderTypes[MAX_LADDERS];
        Snake snakeTypes[MAX_SNAKES];

    public:
        Board(); // Generates default Board
        Board(int); // Generates board of size x (min_size = 10)
        void generateBoard(); // Used to creat custom boards with different amount of snakes and ladders
        char getSpaceInfo(int); // Gets info of space
        Snake getSnakeInfo(int); // Gets info if falls into snake
        Ladder getLadderInfo(int); // Gets info if falls into ladder
        void printBoard();
        int getBoardSize();
        void disableCurrTile(int);

};
#endif