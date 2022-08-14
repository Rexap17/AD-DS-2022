#ifndef AVALANCHE_H
#define AVALANCHE_H

#include <iostream>
#include "Computer.h"

using namespace std;

class Avalanche :public Computer {

protected:
    char move;
public:
    Avalanche();
    ~Avalanche();
};

#endif