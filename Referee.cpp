#include <iostream>
#include "Referee.h"

using namespace std;

Referee::Referee(){

    Human h1;
    Computer c1;

    hMove = h1.makeMove();
    cMove = c1.makeMove();

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

    cout << "result: " << P1 << P2 << endl;

    if(P1 == 'P'){
        return 'W';
    }else if(P1 == 'R'){
        return 'T';
    }else{
        return 'L';
    };

};

Referee::~Referee(){};