#ifndef TOURNAMENT_H
#define TOURNAMENT_H
#include <iostream>

using namespace std;

class Tournament {

    protected:
        char move;
    public:
        Tournament();
        char run();
        ~Tournament();
};

#endif