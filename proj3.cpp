#include <iostream>
#include <cstdlib>

#include "Board.h"
#include "Player.h"
#include "HumanPlayer.h"
#include "SimpleComputerPlayer.h"
#include <string>
#include <array>
using namespace std;
/*
    Purpose: Prompts user, dislays game board, and checks for winner or tie
    Input: p-polymorphic player pointer
           p1-PLayer 1
           p2-Player 2
           b-The board
    Output: success status for main method
*/
int mainGameLoop(Player * p, Player * p1, Player * p2, Board b);

//set-up
Board b; //Main game board
Player * p; //Main ploymorphic pointer
Player * p1; //Player 1
Player * p2; //Player 2

/*
    Purpose: Parsees command line arguments and feeds pointers/objects into  main game loop
    Input: Command line args
    Output: success status
    Assumption: Valid command line args
*/
int main(int argc, char*argv[]) {
    cout << "Let's Start a Game of Connect 4" << endl << endl;
    //Create objects that do nothing when constructed
    HumanPlayer hp1(0); HumanPlayer hp2(0);
    SimpleComputerPlayer scp1(0); SimpleComputerPlayer scp2(0);
    
    if (string(argv[1])=="-h") {
        hp1 = HumanPlayer(1); //set objects to specific player
        p1 = &hp1; //set players to object
    } else {
        scp1 = SimpleComputerPlayer(1);
        p1 = &scp1;
    }
    if (string(argv[2])=="-h") {
        hp2 = HumanPlayer(2);
        p2 = &hp2;
    } else {
        scp2 = SimpleComputerPlayer(2);
        p2 =&scp2;
    }
    p = p1; //Point to player 1
    b.printBoard();
    return mainGameLoop(p,p1,p2,b); 
}

int mainGameLoop(Player * p, Player * p1, Player * p2, Board b) {
    while (true) {
        cout << p->getName() << "\'s turn, Please enter an integer between 1 and 7: ";
        p->updateBoard(b, p->id, p->findX(b)); //update using findX() method
        b.printBoard();
        if(b.checkAll(p->id)) { //check for winner
            cout << endl << p->getName() << " Connected Four and Wins!" << endl;
            return 0;
        }
        if(b.checkTie()) { //check for tues
            cout << endl << "The board is full, it is a draw!" << endl;
            return 0;
        }
        if (p == p1) { //change pointer
            p = p2;
        } else {
            p = p1;
        }
    }

}