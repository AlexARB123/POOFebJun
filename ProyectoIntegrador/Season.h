#ifndef SEASON_H
#define SEASON_H

#include "Video.h"
#include "Episode.h"
#include <iostream>
#include <vector>
using namespace std;

class Season{
    public:
        Season();
        Season(vector<Episode>, string, int, float);
        void SeriesInfo();
        float getRatings();
        void operator+(Episode);
        Episode getEpisode(int);
        int getSeasonNumber();
        string getSeriesName();
        float getSeasonRatings();

    private:
        string SeriesName;
        vector<Episode> episodes;
        int seasonNum;
        float rating;
};

#endif