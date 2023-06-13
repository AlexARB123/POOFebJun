#ifndef EPISODE_H
#define EPISODE_H

#include <iostream>
#include "Video.h"
#include "Episode.h"
using namespace std;

Episode :: Episode(){
    Video x;
    AssignValues(x);
    rating = 0;
}

Episode :: Episode(int i, int d, string name, string g, int _rat){
    ID = i;
    duration = d;
    FileName = name;
    Genero = g;
    rating = _rat;
}

#endif