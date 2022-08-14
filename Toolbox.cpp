#include <iostream>
#include "Computer.h"

using namespace std;

class Toolbox :public Computer{
    
public:
    Toolbox() {};

    char makeMove() {
        char move = 'S';
        return move;
    };

    ~Toolbox() {};
};