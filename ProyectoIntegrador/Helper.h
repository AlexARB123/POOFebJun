#ifndef HELPER_H
#define HELPER_H

// Helper class with methods such as read inputs, save to episode, etc. For use in the main class to run

#include <iostream>
#include "Video.h"
#include "Episode.h"
#include "Season.h"
#include "Series.h"
#include "Movie.h"
#include <fstream>
#include <string>

using namespace std;

class Helper{
    private:
        int ID; // For reference only
    public:
        Helper(); //Only constructor, this class has no attributes. It's only use is to call functions
        vector<string> readFile(string);
        vector<Video> filterMovies(vector<string>);
        vector<Series> Seasons(ifstream);
        vector<Episode> sortByEpisode(Season);
        vector<Season> sortBySeason(Series);

};


#endif