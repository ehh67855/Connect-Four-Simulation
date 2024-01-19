#include "SimpleComputerPlayer.h"

SimpleComputerPlayer::SimpleComputerPlayer(int i) {
    if (i != 0) {
        if ( i == 1) {
            setID('X');
        } else {        
            setID('O');
        }
        cout << "Player One, Please enter your name: Zoey" << endl;
        setName("Zoey");
    }
}

void SimpleComputerPlayer::updateBoard(Board &b, char c, int x) {
    cout << x << endl;
    int y=b.yCount[x];
    b.board[y][x] = c;
    b.yCount[x] = b.yCount[x]+1;
}

int SimpleComputerPlayer::findX(Board &b) {
    for (int i = 0 ; i < 7 ; i++) {
        if (b.yCount[i] < 6) {
            return i;
        }
    }
    return -1;
}