#include <iostream>
#include "Board.h"
#include "Snake.h"
#include "Ladder.h"
using namespace std;

Board:: Board(){
    boardSize = 30;
    numLadders = 3;
    numSnakes = 3;

    snakes[0] = 10;
    snakes[1] = 15;
    snakes[2] = 20;

    ladders[0] = 13;
    ladders[1] = 18;
    ladders[2] = 22;

    int s = 0;
    int l = 0;

    for(int i = 0; i < boardSize; i++){
        
        if(snakes[s] == i){
            board[i] = 's';
            s = s + 1;
        }
        else if(ladders[l] == i){
            board[i] = 'l';
            l = l + 1;
        }
        else{
            board[i] = 't';
        }
    }

    for(int i = 0; i < 3; i++){
        Ladder this_Ladder(3, ladders[i]);
        ladderTypes[i] = this_Ladder;
        ladderTypes[i].setActive();

        Snake this_Snake(-3, snakes[i]);
        snakeTypes[i] = this_Snake;
        snakeTypes[i].setActive();
    }
};

char Board:: getSpaceInfo(int _currSpace){
    if((_currSpace < 0) && (_currSpace >= boardSize)){
        return -1;
    };
    
    return board[_currSpace];
}

int Board:: getBoardSize(){
    return boardSize;
}

Snake Board:: getSnakeInfo(int _snakeSpace){
    int snakeIndex;
    Snake errSnake;
    for(int i = 0; i < numSnakes; i++){
        if (snakeTypes[i].getID() == _snakeSpace){
            return snakeTypes[i];
        }
    }

    return errSnake;
}

Ladder Board:: getLadderInfo(int _ladderSpace){
    int ladderIndex;
    Ladder errLadder;
    for(int i = 0; i < numLadders; i++){
        if (ladderTypes[i].getID() == _ladderSpace){
            return ladderTypes[i];
        }
    }

    return errLadder;
}

void Board:: printBoard(){
    
    printf("Board Size: %d \n", boardSize);
    
    for(int i = 0; i < boardSize; i++){
        printf(" %c ", board[i]);
    }
}

void Board:: disableCurrTile(int _x){
    
    int s, l = 0;
    for(int i = 0; i < boardSize; i++){
        
        if(snakes[s] == i){
            if(snakes[s] == _x){
                snakeTypes[s].disableTile();
                break;
            }
            s = s + 1;
        }
        else if(ladders[l] == i){
            if(ladders[l] == _x){
                ladderTypes[s].disableTile();
                break;
            }
            l = l + 1;
        }
    }
};   