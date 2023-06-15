#include "Video.h"
#include "Movie.h"
#include <iostream>
using namespace std;

Movie :: Movie(){
    Video x;
    AssignValues(x);
    rating = 0;
}

string Movie :: getGenero(){
    return Genero;
}
int Movie :: getRating(){return rating;}
Movie :: Movie(int i, int d, string name, string g, int _rat){
    ID = i;
    duration = d;
    FileName = name;
    Genero = g;
    rating = _rat;
    isEpisode = true;
}

void Movie :: displayInfo(){
    cout << "----------------------------------------------" << endl;
    cout << "Nombre: " << FileName << "\t Duracion: " << duration << endl;
    cout << "Genero: " << Genero << "\t Calificacion: " << rating << endl;
    cout << "----------------------------------------------" << endl;
}

string Movie :: getSeriesName(){return " ";}

bool Movie :: isItEpisode(){return false;}