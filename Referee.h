#ifndef REFEREE_H
#define REFEREE_H

#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Player.h"

using namespace std;

class Referee{
    private:
    int result;
    char p1Move;
    char p2Move;

    public:
        Referee();
        char refGame(Player *player1, Player *player2);
        ~Referee();
};

#endif