#include "Helper.h"
#include "Movie.h"
#include "Controller.h"
#include <iostream>
#include <vector>
using namespace std;

int main(){
    string fileName = "Ejemplo.txt";
    Controller c(fileName);
    bool running = true;
    while(running){
        running = c.run();
    }
    return 0;
}