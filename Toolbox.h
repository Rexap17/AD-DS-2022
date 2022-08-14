#ifndef TOOLBOX_H
#define TOOLBOX_H

#include <iostream>
#include "Computer.h"

using namespace std;

class Toolbox :public Computer {

protected:
    char move;
public:
    Toolbox();
    char makeMove();
    ~Toolbox();
};

#endif