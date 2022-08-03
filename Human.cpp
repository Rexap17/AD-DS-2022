#include <iostream>
#include "Human.h"

using namespace std;

Human::Human(){};

char Human::makeMove(){
    char move;
    cout << "Enter move: ";
    cin >> move;
    while(!cin){
        cout << "Incorrect input, you must enter one character\n" << endl;
        cout << "Enter move: ";
        cin.clear();
        cin.ignore(256,'\n');
        cin >> move;
    }
    return move;
};

Human::~Human(){};