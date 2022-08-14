#include <iostream>
#include "Computer.h"

using namespace std;

class FistfullODollars :public Computer{
    
public:
    int randNum = 0;
    char move;
    FistfullODollars() {};

    char makeMove() {
        if (randNum % 3 == 0) {
            move = 'P';
        }
        else if(randNum % 2 == 0) {
            move = 'P';
        }
        else if(randNum % 1 == 0){
            move = 'R';
        }
        return move;
    };

    ~FistfullODollars() {};
};