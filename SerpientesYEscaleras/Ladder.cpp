#include <iostream>
#include "Ladder.h"
using namespace std;

Ladder:: Ladder(){
    spacesMore = 0;
}

Ladder:: Ladder(int _spacesMore, int _ID){
    if(_spacesMore > 0){
        spacesMore = _spacesMore;
    }
    else{
        cout << "Spaces Less must be less than 0";
        spacesMore = 1;
    }
    ID = _ID;
}

int Ladder:: MoveUp(int _currNum){
    if((_currNum + spacesMore) > _currNum){
        return 0;
    }
    else{
        return _currNum + spacesMore;
    }
}

int Ladder:: getSpacesMore(){
    return spacesMore;
}

void Ladder:: setSpacesMore(int _spacesMore){
    if(_spacesMore < 0){
        spacesMore = _spacesMore;
    }
    else{
        cout << "Spaces Less must be less than 0";
        spacesMore = -1;
    }
}
