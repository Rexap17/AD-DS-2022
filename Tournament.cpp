#include <iostream>
#include "Tournament.h"
#include "Referee.h"

using namespace std;

Tournament::Tournament(){};

Player* Tournament::versus(Player* comp1, Player* comp2) {

    Referee referee;

    Score1 = 0;
    Score2 = 0;

    for (int i=0; i<5; i++) {
        result = referee.refGame(comp1, comp2);

        if (result == 'W') {
            Score1 += 1;
        }
        else if (result == 'L') {
            Score2 += 1;
        }

        if (Score1 >= Score2) {

            return comp1;
        }
        else {
            return comp2;
        }
    }
}

Player* Tournament::run(array<Player*, 8>  competitors) {

    for (int z=0; z<=6; z+=2) {
        semi.at(z/2) = a_against_b(competitors.at(z), competitors.at(z+1));
    }

    for (int y=0; y<=2; y+=2) {

        semi.at(y)->reset();
        semi.at(y+1)->reset();

        final.at(y/2) = versus(semi.at(y), semi.at(y+1));

    }

    final.at(0)->reset();
    final.at(1)->reset();

    winner = versus(final.at(0), final.at(1));

    return winner;
}


Tournament::~Tournament(){};