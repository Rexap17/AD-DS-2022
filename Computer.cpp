#include <iostream>
#include "Computer.h"

using namespace std;

Computer::Computer(){};

char Computer::makeMove(){
    move = 'R';
    return move;
};

string Computer::getName() {
    return "Computer";
};

void Computer::reset() {};

Computer::~Computer(){};