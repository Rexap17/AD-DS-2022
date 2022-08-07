#ifndef REFEREE_H
#define REFEREE_H
#include <iostream>
#include "Human.h"
#include "Computer.h"

using namespace std;

class Referee{

    public:
        char hMove;
        char cMove;

        Referee(char,char);
        char refGame();
        ~Referee();
};

#endif