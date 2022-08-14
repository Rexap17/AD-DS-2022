#include <iostream>
#include "Computer.h"

using namespace std;

class FistfullODollars :public Computer{
    
public:
    int randNum = 0;
    FistfullODollars() {};

    char makeMove() {
        if (randNum % 3 == 0) {
            char move = 'P';
        }
        else if(randNum % 2 == 0) {
            char move = 'P';
        }
        else if(randNum % 1 == 0){
            char move = 'R';
        }
        return move;
    };

    ~FistfullODollars() {};
};