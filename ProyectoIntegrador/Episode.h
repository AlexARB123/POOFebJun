#ifndef EPISODE_H
#define EPISODE_H

#include <iostream>
#include "Video.h"
using namespace std;

class Episode : public Video{
    private:
        int episodeNum;
        string SeriesName;
        int season;
    public:
        Episode();
        Episode(int, int, string, string, int, int, string, int);
        void displayInfo();
        int getEpisodeNum();
        int getRating();
        string getGenero();
        string getSeriesName();
        bool isItEpisode();
};

#endif
