#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>

using namespace std;

class Human{

    protected:
        int rand;
        char move;

    public:
        char player1;
        Human();
        char makeMove();
        char getMove();
        ~Human();
};

#endif