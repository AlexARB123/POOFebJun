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

Helper :: Helper(){
    ID = 0;
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

}
