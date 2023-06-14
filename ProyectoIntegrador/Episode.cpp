#include <iostream>
#include "Video.h"
#include "Episode.h"
using namespace std;

Episode :: Episode(){
    Video x;
    AssignValues(x);
    rating = 0;
}

Episode :: Episode(int i, int d, string name, string g, int _rat, int n){
    ID = i;
    duration = d;
    FileName = name;
    Genero = g;
    rating = _rat;
    episodeNum = n;
}

void Episode :: displayInfo(){
    cout << "Nombre: " << FileName << "\t Duracion: " << duration << endl;
    cout << "Genero: " << Genero << "\tCalificacion: " << rating << endl;
}
