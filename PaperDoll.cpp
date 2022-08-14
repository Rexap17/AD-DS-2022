#include <iostream>
#include "Computer.h"
#include "PaperDoll.h"

using namespace std;

PaperDoll::PaperDoll() {
    randNum = 0;
};

char PaperDoll::makeMove() {
    if (randNum % 3 == 0) {
        move = 'S';
    }
    else if(randNum % 2 == 0) {
        move = 'S';
    }
    else if(randNum % 1 == 0){
        move = 'P';
    }
    return move;
};

PaperDoll::~PaperDoll() {};