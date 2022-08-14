#include <iostream>
#include <string>

#include "Referee.h"
#include "Human.h"
#include "Computer.h"
#include "RandomComputer.cpp"
#include "Avalanche.cpp"
#include "Bureaucrat.cpp"
#include "Toolbox.cpp"
#include "Crescendo.cpp"
#include "PaperDoll.cpp"
#include "FistfullODollars.cpp"

using namespace std;

int main(){

    Human h1;
    Computer c1;
    Referee r1;
    RandomComputer rc1;

    //cout << rc1.makeMove() << endl;

    int result  = r1.refGame(h1,c1);
    cout << result << endl;

    return 0;
}