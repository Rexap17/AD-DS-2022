#include <iostream>
#include "Computer.h"
#include "FistfullODollars.h"

using namespace std;

FistfullODollars::FistfullODollars() {
    randNum = 0;
};

char FistfullODollars::makeMove() {
    if (randNum % 3 == 0) {
        move = 'P';
    }
    else if(randNum % 2 == 0) {
        move = 'P';
    }
    else if(randNum % 1 == 0){
        move = 'R';
    }
    return move;
};

FistfullODollars::~FistfullODollars() {};