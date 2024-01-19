#ifndef BOARD_H
#define BOARD_H
#include <iostream>
#include <vector>
using namespace std;

class Board {
public:
    //The main game board
    vector<vector<char>> board;
    //The amount of tokens in each slot
    vector<int> yCount;
    //Board Constructor, calls init() method 
    Board();
    //Board desructor
    ~Board(){};
    //Purpose: Prints the current game board
    void printBoard();
    //Sets game board to hold all '_' chars 
    void init();
    /*
        Purpose: Calls each winning condition function
        Inputs: The char of the player to check
        Outputs: true if any winning condition has been met
    */
    bool checkAll(char id);
    /*
        Purpose: Checks if player has vertically won
        Inputs: The ID of the player
        Outputs: true if player has won vertically
    */
    bool checkV(char id);
    /*
        Purpose: Checks if player has horizontally won
        Inputs: The ID of the player
        Outputs: true if player has won horizontally
    */
    bool checkH(char id);
    /*
        Purpose: Checks if player has won ascending diagonally
        Inputs: The ID of the player
        Outputs: true if player has won ascending diagonally
    */
    bool checkAscendingD(char id);
    /*
        Purpose: Checks if player has won descending diagonally
        Inputs: The ID of the player
        Outputs: true if player has won descending diagonally
    */
    bool checkDescendingD(char id);
    /*
        Purpose: Checks if the is a tie
        Outputs: true if player has tie has occured
    */
    bool checkTie();
};

#endif
