#include <iostream>
#include "Computer.h"

using namespace std;

class RandomComputer:public Computer{
    
public:
    RandomComputer() {};
    
    char makeMove() {
        int randNum;
        randNum = rand() % 3;
        char move;

        /*int temp;
        for (int i = 0; i < 10; i++) {
            temp = rand() % 3;
            cout << "Rand: " << temp << endl;
        }*/

        if (randNum == 0) {
            move = 'R';
        }
        else if(randNum == 1) {
            move = 'P';
        }
        else if(randNum == 2){
            move = 'S';
        }
        cout << move << endl;
        return move;
    };

    ~RandomComputer() {};
};