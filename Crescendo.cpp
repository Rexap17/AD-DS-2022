#include <iostream>
#include "Computer.h"

using namespace std;

class Crescendo :public Computer{
    
public:
    int randNum = 0;
    Crescendo() {};

    char makeMove() {
        if (randNum % 3 == 0) {
            char move = 'R';
        }
        else if(randNum % 2 == 0) {
            char move = 'S';
        }
        else if(randNum % 1 == 0){
            char move = 'P';
        }
        return move;
    };

    ~Crescendo() {};
};