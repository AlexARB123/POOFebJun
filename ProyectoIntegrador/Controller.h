#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <iostream>
#include "Video.h"
#include "Movie.h"
#include "Episode.h"
#include "Season.h"
#include "Series.h"
#include "Helper.h"

class Controller{
    private:
        string filename;
        vector<Video*> videos;
        vector<Movie> peliculas;
        vector<Series> series;
    public:
        Controller();
        Controller(string);
        bool run();
        void menu();
        void showVideos();
        void showRat(int);
        void showGen(string);
        void showEp(string, int);
        void showMov(int);
        void rate(string, int);
};

#endif