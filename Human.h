#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>

using namespace std;

class Human{

    protected:
        char move;
    public:
        Human();
        char makeMove();
        ~Human();
};

#endif