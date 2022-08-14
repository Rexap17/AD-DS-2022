#ifndef RANDOMCOMPUTER_H
#define RANDOMCOMPUTER_H

#include <iostream>
#include "Computer.h"

using namespace std;

class RandomComputer :public Computer {

protected:
    int randNum;
    char move;
public:
    RandomComputer();
    char makeMove();
    string getName();
    ~RandomComputer();
};

#endif