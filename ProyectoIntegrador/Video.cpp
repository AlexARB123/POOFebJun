#include <iostream>
#include "Video.h"
using namespace std;

Video :: Video(){
    duration = 0;
    FileName = "NA";
}

Video :: Video(int _duration, int id, string _FileName, string g){
    duration = _duration;
    FileName = _FileName;
    Genero = g;
    ID = id;
}

void Video:: displayInfo(){
    cout << "Duration: " << duration << " seconds" << endl;
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