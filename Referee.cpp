#include <iostream>
#include "Referee.h"

using namespace std;

Referee::Referee(){};

char Referee::refGame(Human player1, Computer player2){

    hMove = player1.makeMove();
    cMove = player2.makeMove();

    if(hMove == 'P'){
        switch (cMove) {
            case 'P':
                result = 0;
                break;
            case 'R':
                result = 1;
                break;
            case 'S':
                result = 2;
                break;
        }
    }else if(hMove == 'R'){
        switch (cMove) {
            case 'P':
                result = 2;
                break;
            case 'R':
                result = 0;
                break;
            case 'S':
                result = 1;
                break;
        }
    }else if(hMove == 'S'){
        switch (cMove) {
            case 'P':
                result = 1;
                break;
            case 'R':
                result = 2;
                break;
            case 'S':
                result = 0;
                break;
        }
    }else{
        return -1;
    };
    return result;
};

Referee::~Referee(){};