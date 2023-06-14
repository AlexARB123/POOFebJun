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
        vector<Season> seasons;
    public:
        Series();
        Series(string,vector<Season>);
        Series(string);
        vector<Season> getSeasons();
        void AddSeason(Season);
        void displayInfo();
        string getName();
};

#endif