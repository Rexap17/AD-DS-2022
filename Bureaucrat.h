#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include "Computer.h"

using namespace std;

class Bureaucrat :public Computer {

protected:
    char move;
public:
    Bureaucrat();
    char makeMove();
    string getName();
    ~Bureaucrat();
};

#endif