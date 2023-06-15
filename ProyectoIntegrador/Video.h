#ifndef VIDEO_H
#define VIDEO_H
#include <iostream>
using namespace std;

class Video{
    
    public:
        Video();
        Video(int,int, string,string,int,bool);
        virtual void displayInfo();
        void AssignValues(Video);
        int getDuration();
        void setDuration();
        string getFileName();
        void setFileName(string);
        virtual void setGenero(string);
        string getGenero();
        void setID(int);
        int getID();
        virtual int getRating();
        virtual string getSeriesName();
        virtual bool isItEpisode();
        void setRating(int);
        
    protected:
        int ID;
        int duration; // in seconds
        string FileName;
        string Genero;
        int rating;
        bool isEpisode;

};

#endif