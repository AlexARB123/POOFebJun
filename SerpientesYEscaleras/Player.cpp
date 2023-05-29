#include <iostream>
#include "Player.h"
using namespace std;

Player:: Player(){
    ID = 0;
    Winner = false;
    position = 0;
}

Player :: Player(int _x){
    ID = _x;
    Winner = false;
    position = 0;
}

void Player:: updatePosition(int _x){
    position = position + _x;
}

void Player:: updateWinCon(int _x){
    if (position >= _x){
        Winner = true;
    }
}

bool Player:: hasWon(){
    return Winner;
}

int Player:: getPosition(){
    return position;
}

int Player:: getID(){
    return ID;
}

int Player:: getTurn(){
    return turn;
}

void Player:: tookTurn(){
    turn++;
}

void Player:: setFirstTurn(){
    turn = 1;
}