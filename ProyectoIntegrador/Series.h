#ifndef SERIES_H
#define SERIES_H

#include <iostream>
#include "Episode.h"
#include "Season.h"
#include "Video.h"
#include <vector>
using namespace std;

class Series{
    private:
        string name;
        float ratings;
        vector<Season> seasons;
    public:
        Series();
        Series(string,float,vector<Season>);
        void AddSeason(Season);
        void displayInfo();
        float getRatings();
        string getName();
};

#endif