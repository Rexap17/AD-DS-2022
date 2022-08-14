#include <iostream>
#include "Computer.h"
#include "Crescendo.h"

using namespace std;

Crescendo::Crescendo() {
    randNum = 0;
};

char Crescendo::makeMove() {
    if (randNum % 3 == 0) {
        move = 'R';
    }
    else if(randNum % 2 == 0) {
        move = 'S';
    }
    else if(randNum % 1 == 0){
        move = 'P';
    }
    return move;
};

Crescendo::~Crescendo() {};
