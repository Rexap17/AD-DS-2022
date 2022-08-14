#include <iostream>
#include "Computer.h"

using namespace std;

class Bureaucrat :public Computer{
    
public:
    Bureaucrat() {};

    char makeMove() {
        char move = 'P';
        return move;
    };

    ~Bureaucrat() {};
};