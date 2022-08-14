#include <iostream>
#include "Computer.h"
#include "Avalanche.h"

using namespace std;

Avalanche::Avalanche() {};
char Avalanche::makeMove() {

    move = 'R';
    return move;
}
string Avalanche::getName() {

    return "Avalanche";
}
Avalanche::~Avalanche() {};