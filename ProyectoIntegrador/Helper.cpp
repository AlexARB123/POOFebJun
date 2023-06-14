#include <iostream>
#include "Helper.h"
#include "Video.h"
#include "Episode.h"
#include "Season.h"
#include "Series.h"
#include "Movie.h"
#include <fstream>
#include <string>
#include <sstream>

Helper :: Helper(){}

string Helper :: removeChar(char c, string s){
    for(int i = 0; i < s.size(); i++){
        if(s[i] == c){
            s[i] = ' ';
        }
    }
    return s;
}

vector<string> Helper :: separateString(char delim, string sep){
    
    vector<string> parts;
    stringstream ss(sep);
    string part;
    
    while(getline(ss,part,delim)){
        parts.push_back(part);
    }

    return parts;
}

vector<string> Helper :: readFile(string file){
    
    vector<string> allVids;
    ifstream inputFile(file);
    
    if(!inputFile.is_open()){
        cerr << "Error opening file : " << file << endl;
    }

    // In order to discard the header line
    string line;
    getline(inputFile, line);
    char delimeter = ' ';
    
    while(getline(inputFile, line)){
        allVids.push_back(line);
    }

    return allVids;

}

vector<Movie> Helper :: filterMovies(vector<string> list){
    
    vector<Movie> allMovies;
    Helper h;
    for(int i = 0; i < list.size(); i++){
        if(list[i][0] == 'p'){
            
            vector<string> thisMov = h.separateString(' ', list[i]);
            int id = stoi(thisMov[1]);
            int duration = stoi(thisMov[4]);
            string name = removeChar('_', thisMov[2]);
            string genero = thisMov[3];
            int rat = stoi(thisMov[5]);

            Movie mov(id,duration,name,genero,rat);
            allMovies.push_back(mov);
        }
    }

    return allMovies;
}

vector<Series> Helper :: filterSeries(vector<string> list){
    
    vector<Series> allSeries;
    Helper h;
    
    for(int i = 0; i < list.size(); i++){
        
        if(list[i][0] == 'e'){
            vector<string> thisEp = h.separateString(' ', list[i]);
            bool itExists = false;
            int SeriesIndex = 0;

            // Check if the series already exists, else creats it
            for(int j = 0; j < allSeries.size(); j++){
                if(allSeries[j].getName() == removeChar('_', thisEp[6])){
                    itExists = true;
                    SeriesIndex = j;
                }
            }

            // Creates if not existent
            if(!itExists){
                Series s(removeChar('_', thisEp[6]));
                SeriesIndex = allSeries.size();
                allSeries.push_back(s);
            }
            
            itExists = false;

            // Check if season exists inside of the series, else creates it
            int SeasonIndex = 0;
            int SeasonNum  = 0;
            
            for(int j = 0; j < allSeries[SeriesIndex].getSeasons().size(); j++){
                int currSea = stoi(thisEp[8]);
                Season curr = allSeries[SeriesIndex].getSeasons()[j];
                if(currSea == curr.getSeasonNumber()){
                    itExists = true;
                    SeasonIndex = j;
                }
            }
            

            

            int id = stoi(thisEp[1]);
            int duration = stoi(thisEp[4]);
            string name = removeChar('_', thisEp[2]);
            string genero = thisEp[3];
            int rat = stoi(thisEp[5]);
            int episodeNum = stoi(thisEp[7]);
            Episode ep(id,duration,name,genero,rat,episodeNum);
           
            // Creates if not existent
            if(!itExists){
                vector<Episode> temp;
                temp.push_back(ep);
                Season s(temp, allSeries[SeriesIndex].getName(), stoi(thisEp[8]));
                allSeries[SeriesIndex].AddSeason(s);
            }
            else{
                allSeries[SeriesIndex].getSeasons()[SeasonIndex].addEpisode(ep);
            }
            
               
        }
    }
    return allSeries;

}
