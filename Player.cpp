#include "Player.h"
#include <exception>

void Player::setName(string n) {
    name = n;
}

string Player::getName() {
    return name;
}

void Player::setID(char c) {
    id = c;
}