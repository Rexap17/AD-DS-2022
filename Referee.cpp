#include <iostream>
#include "Referee.h"
#include "Human.h"
#include "Computer.h"

using namespace std;

Referee::Referee(){};

char refGame(Human player1, Computer player2){

    char P1 = player1::makeMove;
    char P2 = player2::makeMove;

    if(P1 == "P"){
        reutrn "W";
    }else if(P1 == "R"){
        return "T";
    }else{
        return "L";
    };

};

Referee::~Referee(){};