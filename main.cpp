#include <iostream>
#include <string>

#include "Referee.h"
#include "Human.h"
#include "Computer.h"


using namespace std;

int main(){
    Referee g1;
    Human h1;
    Computer c1;
    char hMove, cMove;
    hMove = h1.makeMove();
    cMove = c1.makeMove();
    cout << hMove << endl;
    cout << cMove << endl;
   //cout << g1.refGame(hMove,cMove) << endl;
    return 0;
}