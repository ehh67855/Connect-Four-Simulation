#ifndef HUMANPLAYER_H
#define HUMANPLAYER_H
#include <string>
#include <iostream>
#include "Player.h"
using namespace std;
class HumanPlayer : public Player {
public:
    /*
        Purpose: Constructs an object of type HumanPlayer
        Inputs: 0 means do nothing when object created, 1 means create a player 
                1 object, 2 means create a player 2 object.
    */
    HumanPlayer(int i);
    /*
        Purpose: HumanPlayer destructor
    */
    ~HumanPlayer(){};
    /*
        Purpose: Prompts the user for their name.
                Output is different depending on 
                if object is player 1 or 2.
        Inputs:
                1 means player 1, 2 means player 2. 
    */
    void promptName(int i);
    /*
        Purpose: Adds users id to the board based on their
                input.
        Inputs: b-the board the alter
                c-the char to add to the board
                x-the x position to alter
        Assumes valid x position
                
    */
    void updateBoard(Board &b, char c, int x);
    /*
        Purpose: Prompts the user for thei input 
        Inputs: The main game board. Not used
                but parameter is left over so that
                SimpleComputerPlayer can use this param.
        Outputs: The user input
    */
    int findX(Board &b);
};
#endif
