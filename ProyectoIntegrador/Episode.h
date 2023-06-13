#include <iostream>
#include "Video.h"
using namespace std;

class Episode : public Video{
    public:
        Episode();
        Episode(int, int, string, string, int);
        void displayInfo();
};