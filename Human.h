#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>

using namespace std;

class Human{

    protected:
        int rand;

    public:
        Human();
        char makeMove();
        ~Human();
};

#endif