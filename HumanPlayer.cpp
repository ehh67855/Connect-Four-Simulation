#include "HumanPlayer.h"
#include "Player.h"
#include "Board.h"
#include <iostream>

HumanPlayer::HumanPlayer(int i) { 
    if (i!=0){ //0 means do nothing
        promptName(i);
    }
}

void HumanPlayer::promptName(int i) {
    if ( i == 1) {
        setID('X');
        cout << "Player One, Please enter your name: ";
    } else {        
        cout << "Player Two, Please enter your name: ";
        setID('O');
    }
    string response;
    cin >> response;
    setName(response);
}

void HumanPlayer::updateBoard(Board &b, char c, int x){
    int y=b.yCount[x-1];
    b.board[y][x-1] = c;
    b.yCount[x-1] = b.yCount[x-1]+1;
}
    
int HumanPlayer::findX(Board &b) {
    int x;
    cin >> x;
    return x;
}
