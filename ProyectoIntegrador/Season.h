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
        Season(vector<Episode>, string, int);
        Season(string, int);
        void SeriesInfo();
        void addEpisode(Episode);
        Episode getEpisode(int);
        int getSeasonNumber();
        string getSeriesName();
        vector<Episode> getEpisodes();
        void setEpisodes(vector<Episode>);

    private:
        string SeriesName;
        vector<Episode> episodes;
        int seasonNum;
};

#endif