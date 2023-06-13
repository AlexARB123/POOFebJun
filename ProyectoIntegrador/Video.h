#ifndef VIDEO_H
#define VIDEO_H
#include <iostream>
using namespace std;

class Video{
    
    public:
        Video();
        Video(int,int, string,string);
        virtual void displayInfo();
        void AssignValues(Video);
        int getDuration();
        void setDuration();
        string getFileName();
        void setFileName(string);
        void setGenero(string);
        string getGenero();
        void setID(int);
        int getID();
        void getRating();
        
    protected:
        int ID;
        int duration; // in seconds
        string FileName;
        string Genero;
        int rating;

};

#endif