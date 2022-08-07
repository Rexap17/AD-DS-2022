#ifndef COMPUTER_H
#define COMPUTER_H
#include <iostream>

using namespace std;

class Computer{

    protected:
        int rand;
        char move;

    public:
        char player2;

        Computer();
        char makeMove();
        char getMove();
        ~Computer();
};

#endif