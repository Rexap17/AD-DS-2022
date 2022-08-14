#include <iostream>
#include "Computer.h"
#include "RandomComputer.h"

using namespace std;


RandomComputer::RandomComputer() {};
    
char RandomComputer::makeMove() {
    int randNum;
    char move;
    randNum = rand() % 3;

    if (randNum == 0) {
        move = 'R';
    }
    else if(randNum == 1) {
        move = 'P';
    }
    else if(randNum == 2){
        move = 'S';
    }
    return move;
};

RandomComputer::~RandomComputer() {};