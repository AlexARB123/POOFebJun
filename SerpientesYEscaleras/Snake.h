#ifndef SNAKE_H
#define SNAKE_H
#include <iostream>
#include "Tile.h"
using namespace std;

class Snake : public Tile{
    public:
        Snake();
        Snake(int, int);
        int FallDown(int);
        void setSpacesLess(int);
        int getSpacesLess();

    private:
        int spacesLess; // Must always be negative
};

#endif