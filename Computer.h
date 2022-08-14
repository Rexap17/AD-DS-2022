#ifndef COMPUTER_H
#define COMPUTER_H
#include <iostream>

using namespace std;
#include "Player.h"

class Computer:public Player{

    protected:
        char move;
    public:
        Computer();
        virtual char makeMove();
        virtual string getName();
        virtual void reset();
        ~Computer();
};

#endif