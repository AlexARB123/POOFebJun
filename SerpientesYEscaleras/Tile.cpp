#include <iostream>
#include "Tile.h"
using namespace std;

Tile:: Tile(){
    ID = 0;
    active = false;
}

Tile:: Tile(int _ID){
    ID = _ID;
    active = true;
}

bool Tile:: isTileActive(){
    return active;
}

int Tile:: getID(){
    return ID;
}

void Tile::disableTile(){
    active = false;
}

void Tile:: setID(int _ID){
    ID = _ID;
}

void Tile:: setActive(){
    active = true;
}