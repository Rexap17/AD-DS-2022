#include <iostream>
#include "Computer.h"
#include "FistfullODollars.h"

using namespace std;

FistfullODollars::FistfullODollars() {
    randNum = 0;
};

char FistfullODollars::makeMove() {
    randNum++;
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

string FistfullODollars::getName() {
    return "FistfullODollars";
}

void FistfullODollars::reset() {
    randNum = 0;
}

FistfullODollars::~FistfullODollars() {};