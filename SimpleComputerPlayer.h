#ifndef SIMPLECOMPUTERPLAYER_H
#define SIMPLECOMPUTERPLAYER_H
#include "Player.h"
#include "Board.h"
#include <iostream>

using namespace std;

class SimpleComputerPlayer : public Player {
public:
    /*
        Purpose: Constructs a SimpleComputerPlayer object.
                Initilizes name to Zoey
        Inputs: i, 0 means do nothing, 1 for player 1, 2 for player 2
    */
    SimpleComputerPlayer(int i);
    /*
        Purpose: SimpleComputerPlayer desructor
    */
    ~SimpleComputerPlayer(){};
    /*
        Purpose: Ads charecter id to given x position on the board
        Inputs: b-the board to alter, c-the id, x-the position to change
        Assumes valid x position
    */
    void updateBoard(Board &b, char c, int x);
    /*
        Purpose: Finds the leftmost valid x position
        Inputs: The board to run algorithm on
        Outputs: The x position
    */
    int findX(Board &b);
};

#endif
