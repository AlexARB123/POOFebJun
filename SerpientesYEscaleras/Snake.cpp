#include <iostream>
#include "Snake.h"
using namespace std;

Snake:: Snake(){
    spacesLess = 0;
}

Snake:: Snake(int _spacesLess, int _ID){
    if(_spacesLess < 0){
        spacesLess = _spacesLess;
    }
    else{
        cout << "Spaces Less must be less than 0";
        spacesLess = -1;
    }

    ID = _ID;
}

int Snake:: FallDown(int _currNum){
    if((_currNum + spacesLess) > _currNum){
        return 0;
    }
    else{
        return _currNum + spacesLess;
    }
}

int Snake:: getSpacesLess(){
    return spacesLess;
}

void Snake:: setSpacesLess(int _spacesLess){
    if(_spacesLess < 0){
        spacesLess = _spacesLess;
    }
    else{
        cout << "Spaces Less must be less than 0";
        spacesLess = -1;
    }
}
