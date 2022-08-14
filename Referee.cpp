#include <iostream>
#include "Referee.h"

using namespace std;

Referee::Referee(){};

char Referee::refGame(Player *player1, Player *player2){

    p1Move = player1->makeMove();
    p2Move = player2->makeMove();

    if(p1Move == 'P'){
        switch (p2Move) {
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
    }else if(p1Move == 'R'){
        switch (p2Move) {
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
    }
    else if (p1Move == 'S') {
        switch (p2Move) {
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
    };

    if (result == 0) {
        return 'T';
    }
    else if (result == 1) {
        return 'W';
    }
    else if (result == 2) {
        return 'L';
    }
    
};

Referee::~Referee(){};