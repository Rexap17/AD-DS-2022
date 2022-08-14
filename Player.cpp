#include "Player.h"
#include <iostream>

using namespace std;


Player::Player(){}

char Player::makeMove(){
    move = 'S';
    return move;
}

string Player::getName(){
    return "Player";
}

Player::~Player() {};




