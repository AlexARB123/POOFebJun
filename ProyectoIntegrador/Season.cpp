#include <iostream>
#include "Video.h"
#include "Episode.h"
#include "Season.h"
using namespace std;

Season :: Season(){
    Episode e;
    episodes.push_back(e);
    rating = 0;
    seasonNum = 0;
    SeriesName = "NULL";
}

Season :: Season(vector<Episode> e, string name, int num, float rat){
    episodes = e;
    SeriesName = name;
    seasonNum = num;
    rating = rat;
}

void Season :: operator+(Episode e){
    episodes.push_back(e);
}

Episode Season :: getEpisode(int episodeIndex){
        if (episodeIndex >= 0 && episodeIndex < episodes.size()) {
            return episodes[episodeIndex];
        }
        // Return a default episode if the index is out of bounds
        return Episode();
}

int Season:: getSeasonNumber(){
    return seasonNum;
}

string Season :: getSeriesName(){
    return SeriesName;
}

float Season :: getSeasonRatings(){
    return rating;
}