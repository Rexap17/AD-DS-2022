#include <iostream>
#include "Tournament.h"

using namespace std;

Tournament::Tournament(){};

char Tournament::run(){
    move = 'R';
    return move;
};

Tournament::~Tournament(){};