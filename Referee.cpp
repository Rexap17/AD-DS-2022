#include <iostream>
#include "Referee.h"

using namespace std;

Referee::Referee(char m1,char m2){
    hMove = m1;
    cMove = m2;
};

char Referee::refGame(){

    char P1 = hMove;
    char P2 = cMove;

    if(P1 == 'P'){
        return 'W';
    }else if(P1 == 'R'){
        return 'T';
    }else{
        return 'L';
    };

};

char Referee::refGame(char P1, char P2){

    if(P1 == 'P'){
        return 'W';
    }else if(P1 == 'R'){
        return 'T';
    }else{
        return 'L';
    };

};

char refGame(Human player1, Computer player2){

    char P1 = player1.getMove();
    char P2 = player2.getMove();

    if(P1 == 'P'){
        return 'W';
    }else if(P1 == 'R'){
        return 'T';
    }else{
        return 'L';
    };

};

Referee::~Referee(){};