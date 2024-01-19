#include "Board.h"

using namespace std;

Board::Board() {
    init();
}

void Board::printBoard() {
    for (int i = board.size() - 1 ; i >= 0 ; i--) {
        for (unsigned int j = 0 ; j < board[i].size() ; j++) {
            cout << "|" << board[i][j]; //='_' 'O' or 'X'
        }
        cout << "|" << endl;
    }
}

void Board::init() {
    for (int i = 0 ; i < 6 ; i++) {
        vector<char> temp;
        board.push_back(temp);
        for (int j = 0 ; j < 7 ; j++) {
            board[i].push_back('_');
        }
    }
    for (int i = 0 ; i < 7 ; i++) {
        yCount.push_back(0);
    }
}

bool Board::checkAll(char id) {
    if (checkV(id)) {return true;}
    if (checkH(id)) {return true;}
    if (checkAscendingD(id)) {return true;}
    if (checkDescendingD(id)) {return true;}
    return false;
}

bool Board::checkH(char id){
    for (unsigned int i = 0 ; i < board.size() ; i++) {
        for (unsigned int  j = 0 ; j < board[j].size() - 3 ; j++) {
            if (board[i][j] == id && board[i][j+1] == id && board[i][j+2] == id && board[i][j+3] == id) {
                return true;
            }
        }
    }
    return false;
}

bool Board::checkV(char id) {
    for (unsigned int i = 0 ; i < 3; i++) {
        for (unsigned int j = 0 ; j < board[i].size() ; j++) {
            if (board[i][j] == id && board[i+1][j] == id && board[i+2][j] == id && board[i+3][j] == id) {
                return true;
            }
        }
    }
    return false;
}

bool Board::checkAscendingD(char id) {
    for ( int i = 0 ; i < 3 ; i++) {
        for (int j = 0 ; j < 4; j++) {
            if (board[i][j] == id && board[i+1][j+1] == id && board[i+2][j+2] == id && board[i+3][j+3] == id) {
                return true;
            }
        }
    }
    return false;
}

bool Board::checkDescendingD(char id) {
    for ( int i = 0 ; i < 3; i++) {
        for (int j = 6 ; j > 2; j--) {
            if (board[i][j] == id && board[i+1][j-1] == id && board[i+2][j-2] == id && board[i+3][j-3] == id) {
                return true;
            }
        }
    }
    return false;
}

bool Board::checkTie() {

    for (int i = 0 ; i < 6 ; i++) {
        for (int j = 0 ; j < 7 ; j++) {
            if (board[i][j] == '_') { return false; }
        }
    }
    return true;

}
