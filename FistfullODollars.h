#ifndef FISTFULLODOLLARS_H
#define FISTFULLODOLLARS_H

#include <iostream>
#include "Computer.h"

using namespace std;

class FistfullODollars :public Computer {

protected:
    int randNum;
    char move;
public:
    FistfullODollars();
    char makeMove();
    string getName();
    void reset();
    ~FistfullODollars();
};

#endif