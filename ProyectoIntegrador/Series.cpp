#include <iostream>
#include "Episode.h"
#include "Season.h"
#include "Video.h"
#include <vector>
#include "Series.h"
using namespace std;

Series :: Series(){
    name = "";
    vector<Season> s;
    seasons = s;
}

Series :: Series(string n, vector<Season> s){
    name = n;
    seasons = s;
}

Series :: Series(string n){
    name = n;
    vector<Season> s;
    seasons = s;
}

void Series :: AddSeason(Season s){
    seasons.push_back(s);
}

vector<Season> Series :: getSeasons(){return seasons;}

string Series :: getName(){return name;}

void Series :: setSeasons(vector<Season> s){
    seasons = s;
}