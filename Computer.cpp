#include <iostream>
#include "Computer.h"

using namespace std;

Computer::Computer(){};

char Computer::makeMove(){
    move = 'R';
    return move;
};

Computer::~Computer(){};