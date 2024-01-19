#ifndef PLAYER_H
#define PLAYER_H
#include <string>

#include "Board.h"
using namespace std;

class Player {
public:
    //The name of the player
    string name;
    //The charecter that will be added ot the board (X,O)
    char id;
    /*
        Purpose: Sets id
        Inputs: The charecter
    */
    void setID(char c);
    /*
        Purpose: Sets name
        Inputs: string of name
    */
    void setName(string n);
    /*
        Purpose: Gets the name of the player
        Output: string of name
    */
    string getName();
    /*
        Purpose: The different player will handel the 
                    x positions differently and thus a virtual 
                    method is used.
        Inputs: b-The board to alter
                c-The charecter to use
                x-The x position on the board
    */
    virtual void updateBoard(Board &b, char c, int x) = 0;
    /*
        Purpose: The player must override in order to 
                 find the x position
        Inputs: b-The board to alter
                c-The charecter to use
                x-The x position on the board
    */
    virtual int findX(Board &b) = 0;
};

#endif