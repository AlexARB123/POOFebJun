#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>
#include "Video.h"
using namespace std;

class Movie : public Video{
    public:
        Movie();
        Movie(int, int, string, string, int);
        void displayInfo();
};

#endif