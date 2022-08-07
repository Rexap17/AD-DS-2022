#ifndef REFEREE_H
#define REFEREE_H
#include <iostream>
#include "Human.h"
#include "Computer.h"

using namespace std;

class Referee{

    public:
        Referee();
        char refGame(char p1,char p2);
        ~Referee();
};

#endif