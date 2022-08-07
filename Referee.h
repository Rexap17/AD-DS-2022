#ifndef REFEREE_H
#define REFEREE_H
#include <iostream>
#include "Human.h"
#include "Computer.h"

using namespace std;

class Referee:public Human,public Computer{

    public:
        char hMove;
        char cMove;

        Referee(char,char);
        char refGame();
        char refGame(char, char);
        char refGame(Human player1, Computer player2);
        ~Referee();
};

#endif