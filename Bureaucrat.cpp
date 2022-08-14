#include <iostream>
#include "Computer.h"
#include "Bureaucrat.h"

using namespace std;


Bureaucrat::Bureaucrat() {};

char Bureaucrat::makeMove() {
    char move = 'P';
    return move;
};

string Bureaucrat::getName() {
    return "Bureaucrat";
}

Bureaucrat::~Bureaucrat() {};
