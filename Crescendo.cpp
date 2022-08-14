#include <iostream>
#include "Computer.h"
#include "Crescendo.h"

using namespace std;

Crescendo::Crescendo() {
    num = 0;
};

char Crescendo::makeMove() {
    num++;

    if (num % 3 == 0) {
        move = 'R';
    }
    else if(num % 2 == 0) {
        move = 'S';
    }
    else if(num % 1 == 0){
        move = 'P';
    }

    return move;
};

string Crescendo::getName() {
    return "Crescendo";
}

void Crescendo::reset() {
    num = 0;
}

Crescendo::~Crescendo() {};
