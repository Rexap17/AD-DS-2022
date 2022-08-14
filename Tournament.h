#ifndef TOURNAMENT_H
#define TOURNAMENT_H
#include <iostream>

using namespace std;

class Tournament {

    protected:
        char move;
    public:
        Tournament();
        char run(int *Players, int size, string competitors);
        ~Tournament();
};

#endif