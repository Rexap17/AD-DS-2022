#ifndef PAPERDOLL_H
#define PAPERDOLL_H

#include <iostream>
#include "Computer.h"

using namespace std;

class PaperDoll :public Computer {

protected:
    int randNum;
    char move;
public:
    PaperDoll();
    char makeMove();
    string getName();
    void reset();
    ~PaperDoll();
};

#endif