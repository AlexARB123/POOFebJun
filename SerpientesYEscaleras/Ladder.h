#ifndef LADDER_H
#define LADDER_H
#include <iostream>
#include "Tile.h"
using namespace std;

class Ladder : public Tile{
    
    public: 
        Ladder();
        Ladder(int, int);
        int MoveUp(int);
        void setSpacesMore(int);
        int getSpacesMore();

    private:
        int spacesMore; // Must always be negative
};

#endif