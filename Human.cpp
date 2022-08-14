#include <iostream>
#include "Human.h"

using namespace std;

Human::Human(){};

char Human::makeMove(){
    cout << "Enter move: ";
    cin >> move;
    move = toupper(move);
    return move;
};

Human::~Human(){};