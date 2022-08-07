#ifndef COMPUTER_H
#define COMPUTER_H
#include <iostream>

using namespace std;

class Computer{

    protected:
        char move;
    public:
        Computer();
        char makeMove();
        ~Computer();
};

#endif