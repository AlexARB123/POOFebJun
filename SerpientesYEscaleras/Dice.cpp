#include "Dice.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

Dice:: Dice(){
    std::srand(std::time(nullptr));
}

int Dice:: roll(){
    std:: rand() % 6 + 1;
    return std:: rand() % 6 + 1;
}