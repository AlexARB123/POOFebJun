#include <iostream>
#include "Board.h"
#include "Player.h"

const int MAX_PLAYERS = 4;

class Game{
    public:
        Game(); // Game with two players and default Board
        Game(int); // Game with custom number of players
        Game(int, Board); // Board with custom number of players and custom Board
        Game(Board); // Game with two players and custom Board
        void playGame(); // plays the game
    
    private:
        int numPlayers;
        Player player[MAX_PLAYERS];
        Board board;

};