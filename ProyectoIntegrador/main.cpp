#include "Helper.h"
#include "Movie.h"
#include <iostream>
#include <vector>
using namespace std;

int main(){
    string name = "Ejemplo.txt";
    Helper help;

    vector<string> test = help.readFile(name);
    
    vector<Movie> Movies = help.filterMovies(test);
    
    vector<Series> plsWork = help.filterSeries(test);
    
    for(int i = 0; i < plsWork.size(); i++){
        for(int j = 0; j < plsWork[i].getSeasons().size(); j++){
            cout << "---------------------------------------" << endl;
            cout << "Series: " << plsWork[i].getName() << "\t Season: " << plsWork[i].getSeasons()[j].getSeasonNumber() << endl;
            
            for(int k = 0; k < plsWork[i].getSeasons()[j].getEpisodes().size(); k++){
                plsWork[i].getSeasons()[j].getEpisodes()[k].displayInfo();
            }
        }
    }

    return 0;
}