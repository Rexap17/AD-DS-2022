#include <iostream>
#include "Computer.h"

using namespace std;

class Crescendo :public Computer{
    
public:
    int randNum = 0;
    char move;
    Crescendo() {};

    char makeMove() {
        if (randNum % 3 == 0) {
            move = 'R';
        }
        else if(randNum % 2 == 0) {
            move = 'S';
        }
        else if(randNum % 1 == 0){
            move = 'P';
        }
        return move;
    };

    ~Crescendo() {};
};