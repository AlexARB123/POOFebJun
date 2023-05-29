#include <iostream>
using namespace std;

class Player{
    public:
        Player(); // Default player creator (Value = 0) 
        Player(int); // Creates player with set ID
        void updatePosition(int); // Modifies player position
        void updateWinCon(int); // Checks if player has won
        bool hasWon(); // Tells Game Manager class player has won
        int getID(); // Returns the ID
        int getPosition();
        int getTurn();
        void tookTurn();
        void setFirstTurn();
    
    private:
        int ID;
        int turn;
        int position;
        bool Winner;
};