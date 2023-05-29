#include <iostream>
#include "Game.h"
#include "Dice.h"
#include "Snake.h"
#include "Ladder.h"
using namespace std;

Game:: Game(){
    Board gameBoard;
    board = gameBoard;

    numPlayers = 2;
    
    Player player1(1);
    Player player2(2);
    
    player[0] = player1;
    player[1] = player2;
    player[0].setFirstTurn();
    player[1].setFirstTurn();
}

void Game:: playGame(){
    bool continueGame = true;

    while(continueGame){

        for(int i = 0; i < numPlayers; i++){
            bool validInput = true;

            printf("It is turn %d for player %d \n", player[i].getTurn(), player[i].getID());
            char check;
            
            printf("What would you like to do: \n C - Continue \n E - End Game\n");

            while(validInput){
                cin >> check;
                
                if(check == 'E'){
                    continueGame = false;
                    break;
                }

                if(check == 'C'){
                    validInput = false;
                    break;
                }

                printf("Please enter a valid input ""E"" or ""C""\n");
            }
            

            Dice dice;
            int roll = dice.roll();

            printf("Player %d rolled a %d \n", player[i].getID(), roll);
            player[i].updatePosition(roll);

            char boardInfo = board.getSpaceInfo(player[i].getPosition());

            if(boardInfo == 's'){
                Snake land = board.getSnakeInfo(player[i].getPosition());
                if(land.isTileActive()){
                    board.disableCurrTile(player[i].getPosition());
                    player[i].updatePosition(land.getSpacesLess());
                    printf("Player: %d landed on an active snake \nTheir position is now %d\n", player[i].getID(), player[i].getPosition());
                }

            }
            else if(boardInfo == 'l'){
                Ladder land = board.getLadderInfo(player[i].getPosition());
                if(land.isTileActive()){
                    board.disableCurrTile(player[i].getPosition());
                    player[i].updatePosition(land.getSpacesMore());
                    printf("Player: %d landed on an active ladder \nTheir position is now %d\n", player[i].getID(), player[i].getPosition());
                }
            }
           
           player[i].updateWinCon(board.getBoardSize());
           
           if(player[i].hasWon()){
                printf("Player %d has won\n", player[i].getID());
                continueGame = false;
                break;
           }
           
           printf("Player %d is now in position %d\n\n\n", player[i].getID(), player[i].getPosition());
           player[i].tookTurn();

        }
    }
}