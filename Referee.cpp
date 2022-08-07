#include <iostream>
#include "Referee.h"

using namespace std;

Referee::Referee(){};

char refGame(Human player1, Computer player2){

    char P1 = player1.makeMove();
    //player2.makeMove();

    if(P1 == 'P'){
        return 'W';
    }else if(P1 == 'R'){
        return 'T';
    }else{
        return 'L';
    };

};

Referee::~Referee(){};