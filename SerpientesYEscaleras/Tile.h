#ifndef TILE_H
#define TILE_H
#include <iostream>
using namespace std;

class Tile{
   
    public:
        Tile();
        Tile(int); // Declare empty tile with ID
        bool isTileActive(); // Will check if tile can apply consequences or rewards to players
        int getID();
        void disableTile();
        void setID(int);
        void setActive();

    protected:
        bool active; 
        int ID;
};
#endif