#include <iostream>
#include "Video.h"
#include "Episode.h"
#include "Season.h"
using namespace std;

Season :: Season(){
    Episode e;
    episodes.push_back(e);
    seasonNum = 0;
    SeriesName = "NULL";
}

Season :: Season(vector<Episode> e, string name, int num){
    episodes = e;
    SeriesName = name;
    seasonNum = num;

}

Season :: Season(string n, int num){
    vector<Episode> e;
    episodes = e;
    SeriesName = n;
    seasonNum = num;
}

void Season :: addEpisode(Episode e){
    e.displayInfo();
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

vector<Episode> Season :: getEpisodes(){
    return episodes;
}