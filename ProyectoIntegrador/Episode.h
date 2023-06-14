#ifndef EPISODE_H
#define EPISODE_H

#include <iostream>
#include "Video.h"
using namespace std;

class Episode : public Video{
    private:
        int episodeNum;
    public:
        Episode();
        Episode(int, int, string, string, int, int);
        void displayInfo();
};

#endif
