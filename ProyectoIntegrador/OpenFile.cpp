#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main(){
    
    ifstream inputFile("EJEMPLO.txt");
    
    if(inputFile.is_open()){
        
        string line;
        cout <<"test";
        
        while(getline(inputFile, line)){
            cout << line << endl;
        }
    }
}