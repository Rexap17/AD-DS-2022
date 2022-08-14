#include <iostream>
#include "Computer.h"
#include "Toolbox.h"

using namespace std;

Toolbox::Toolbox() {};

char Toolbox::makeMove() {
    char move = 'S';
    return move;
};

string Toolbox::getName() {
    return "Toolbox";
}

Toolbox::~Toolbox() {};
