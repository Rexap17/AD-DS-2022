#include <iostream>
#include "Computer.h"

using namespace std;

class PaperDoll :public Computer{
    
public:
    int randNum = 0;
    PaperDoll() {};

    char makeMove() {
        if (randNum % 3 == 0) {
            char move = 'S';
        }
        else if(randNum % 2 == 0) {
            char move = 'S';
        }
        else if(randNum % 1 == 0){
            char move = 'P';
        }
        return move;
    };

    ~PaperDoll() {};
};