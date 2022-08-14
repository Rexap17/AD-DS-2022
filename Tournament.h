#ifndef TOURNAMENT_H
#define TOURNAMENT_H
#include <iostream>

#include "Player.h"
#include "Referee.h"
#include <array>

using namespace std;

class Tournament {

    private:
        char move;
        int Score1 = 0;
        int Score2 = 0;
        char result;

        Player *versus(Player* comp1, Player* comp2);

        array<Player*, 4> semi;
        array<Player*, 4> final;

        Player* winner;

    public:
        Tournament();
        Player* run(std::array<Player*, 8>  competitors);
        ~Tournament();
};

#endif