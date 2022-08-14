#ifndef CRESCENDO_H
#define CRESCENDO_H

#include <iostream>
#include "Computer.h"

using namespace std;

class Crescendo :public Computer {

protected:
    int randNum;
    char move;
public:
    Crescendo();
    char makeMove();
    ~Crescendo();
};

#endif