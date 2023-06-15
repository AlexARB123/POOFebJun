#include <iostream>
#include <typeinfo>
#include <limits>
#include "Video.h"
#include "Movie.h"
#include "Episode.h"
#include "Season.h"
#include "Series.h"
#include "Helper.h"
#include "Controller.h"

Controller :: Controller(){
    filename = "";
    Helper h;
    vector<string> archivo = h.readFile(filename);
    videos = h.obtainVideos(archivo);
    peliculas = h.filterMovies(archivo);
    series = h.filterSeries(archivo);
}


Controller :: Controller(string f){
    filename = f;
    Helper h;
    vector<string> archivo = h.readFile(filename);
    videos = h.obtainVideos(archivo);
    peliculas = h.filterMovies(archivo);
    series = h.filterSeries(archivo);
}

bool Controller :: run(){
    Helper h;
    menu();
    int currOpt = -1;
    
    cin >> currOpt;
    
    if(currOpt == 0){
        return false;
    }
    else if(currOpt == 1){
        cout << "Archivo Ejemplo.txt cargado" << endl;
    }
    else if(currOpt == 2){
        showVideos();
    }
    else if(currOpt == 3){
        string serie = " ";
        int rating = 4;
        cout << "Que serie quieres buscar (Separar espacios con _):";
        cin >> serie;

        serie = h.removeChar('_', serie);
        
        cout << endl << "Que calificacion buscas?" << endl;
        cin >> rating;

        showEp(serie,rating);
    }
    else if(currOpt == 4){
        int rating;
        cout << "Que calificacion buscas" << endl;
        cin >> rating;
        showMov(rating);
    }
    else if(currOpt == 5){
        string title;
        int rating;
        cout << "Que titulo quieres buscar (Separar espacios con _): ";
        cin >> title;

        cout << "Que calificacion le quieres asignar?: " ;
        cin >> rating;
        rate(title,rating);
    }

    return true;
}

void Controller :: menu(){
    cout <<"******************************" << endl << "PLEASE SELECT AN OPTION" << endl;
    cout << "1) Carga Archivos (Ejemplo.txt cargado)" << endl;
    cout << "2) Mostrar videos con cierta calificacion" << endl;
    cout << "3) Mostrar episodios de una seria determinada" << endl;
    cout << "4) Mostrar peliculas con cierta calificacion" << endl;
    cout << "5) Calificar un video" << endl;
    cout << "0) Salir" << endl;
}

void Controller :: showVideos(){

    int decision = -1;
    cout << endl << "Ha elegido buscar videos. Por que categoria quisiera buscar?" << endl;
    cout << "1) Calificacion" << endl;
    cout << "2) Genero" << endl;
    cout << "0) Salir" << endl;

    cin >> decision;
    
    int rating = 0;
    string gen = " ";
    
    if(decision == 0){
        return;
    }
    else if(decision == 1){
        cout << "Que calificacion deseas buscar?" << endl;
        cin >> rating;
        showRat(rating);
    }
    else if(decision == 2){
        cout << "Que genero buscas?";
        cin >> gen;
        showGen(gen);
    }
}    
 
void Controller :: showRat(int rat){
    
    for (int i = 0; i < videos.size(); i++){
        if(videos[i]->getRating() == rat){
            cout << "-------------" << endl;
            videos[i]->displayInfo();
            cout << "-------------" << endl;   
        }
    }
}
void Controller :: showGen(string g){
    
    for (int i = 0; i < videos.size(); i++){
        if(videos[i]->getGenero() == g){
            cout << "-------------" << endl;
            videos[i]->displayInfo();
            cout << "-------------" << endl;   
        }
    }
}
void Controller :: showEp(string Serie, int rating){
    for(int i = 0; i < videos.size(); i++){
        if(videos[i]->getRating() == rating){
            if(videos[i]->isItEpisode()){
                string series = videos[i]->getSeriesName();

                if(series == Serie){
                    videos[i]->displayInfo();
                }
            }
        }
    }
}
void Controller :: showMov(int rat){
    
    for(int i = 0; i < videos.size(); i++)
    {
        if(!videos[i]->isItEpisode() && videos[i]->getRating() == rat){
            videos[i]->displayInfo();
        }
    }
}

void Controller :: rate(string title, int rat){
    
    for(int i = 0; i < videos.size(); i++){
        if(videos[i]->getFileName() == title){
            videos[i]->setRating(rat);
        }
    }
}