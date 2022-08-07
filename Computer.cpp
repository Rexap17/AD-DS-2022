#include <iostream>
#include "Computer.h"

using namespace std;

Computer::Computer(){};

char Computer::makeMove(){
    move = 'R';
    player2 = move;
    return move;
};

char Computer::getMove(){
    return move;
};

Computer::~Computer(){};