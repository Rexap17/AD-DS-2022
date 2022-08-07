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

        Referee();
        char refGame(Human player1, Computer player2);
        ~Referee();
};

#endif