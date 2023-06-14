#ifndef HELPER_H
#define HELPER_H

// Helper class with methods such as read inputs, save to episode, etc. For use in the main class to run

#include <iostream>
#include "Video.h"
#include "Episode.h"
#include "Season.h"
#include "Series.h"
#include "Movie.h"
#include <vector>
#include <fstream>
#include <string>

using namespace std;

class Helper{
    public:
        Helper(); //Only constructor, this class has no attributes. It's only use is to call functions
        string removeChar(char,string);
        vector<string> separateString(char,string);
        vector<string> readFile(string);
        bool compareTwoEpisodes(Episode, Episode); // Episodes in chronological order
        bool compareTwoSeasons(Season,Season); // Season in chronological order
        vector<Movie> filterMovies(vector<string>);
        vector<Series> filterSeries(vector<string>);
        vector<Episode> sortByEpisode(Season);
        vector<Season> sortBySeason(Series);

};


#endif