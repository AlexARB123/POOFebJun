#include <iostream>
#include "Video.h"
using namespace std;

Video :: Video(){
    duration = 0;
    FileName = "NA";
}

Video :: Video(int _duration, int id, string _FileName, string g,int rat,bool ep){
    duration = _duration;
    FileName = _FileName;
    Genero = g;
    ID = id;
    rating = rat;
    isEpisode = ep;
}

int Video :: getRating(){return rating;}

void Video:: displayInfo(){
    cout << "Duration: " << duration << " minutes" << endl;
    cout << "File Name: " << FileName << endl;
}
int Video:: getDuration(){
        return duration;
    }
string Video :: getFileName(){
        return FileName;
    }

void Video :: AssignValues(Video _x){
    duration = _x.getDuration();
    FileName = _x.getFileName();
    ID = _x.getID();
    
}

string Video :: getGenero(){
    return Genero;
}

void Video :: setGenero(string g){
    Genero  = g;
}

int Video :: getID(){
    return ID;
}

void Video :: setID(int id){
    ID = id;
}

bool Video :: isItEpisode(){
    return false;
}

string Video :: getSeriesName(){return " ";}

void Video :: setRating(int rat){
    rating = rat;
}