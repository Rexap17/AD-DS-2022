#include <iostream>
#include "Referee.h"

using namespace std;

Referee::Referee(){};

char Referee::refGame(Human player1, Computer player2){

    hMove = player1.makeMove();
    cMove = player2.makeMove();

    if(hMove == 'P'){
        return 'W';
    }else if(hMove == 'R'){
        return 'T';
    }else if(hMove == 'S'){
        return 'L';
    }else{
        return 0;
    };

};

Referee::~Referee(){};