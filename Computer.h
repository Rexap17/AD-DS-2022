#ifndef COMPUTER_H
#define COMPUTER_H
#include <iostream>

using namespace std;

class Computer{

    protected:
        int rand;

    public:
        Computer();
        char makeMove();
        ~Computer();
};

#endif