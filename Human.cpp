#include <iostream>
#include "Human.h"

using namespace std;

Human::Human(){};

char Human::makeMove(){
    cout << "Enter move: ";
    cin >> move;
    move = toupper(move);
    player1 = move;
    return move;
};

char Human::getMove(){
    return move;
};

Human::~Human(){};