#include <iostream>
#include "Video.h"
#include "Episode.h"
using namespace std;

Episode :: Episode(){
    Video x;
    AssignValues(x);
    rating = 0;
}
string Episode :: getGenero(){
    return Genero;
}
int Episode :: getRating(){return rating;}
Episode :: Episode(int i, int d, string name, string g, int _rat, int n, string sn, int t){
    ID = i;
    duration = d;
    FileName = name;
    Genero = g;
    rating = _rat;
    episodeNum = n;
    SeriesName = sn;
    season = t;
}

void Episode :: displayInfo(){
    cout << "Nombre: " << FileName << "\t Duracion: " << duration << endl;
    cout << "Genero: " << Genero << "\tCalificacion: " << rating << endl;
    cout << "Serie: " << SeriesName << "\tTemporada: " << season << " Episodio: " << episodeNum << endl;
}

int Episode :: getEpisodeNum(){return episodeNum;}

string Episode :: getSeriesName(){return SeriesName;}

bool Episode :: isItEpisode(){return true;}