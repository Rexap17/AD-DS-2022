#include <iostream>
#include <string>

#include "Referee.h"
#include "Human.h"
#include "Computer.h"


using namespace std;

int main(){

    Human h1;
    Computer c1;
    Referee r1;

    char result  = r1.refGame(h1,c1);

    return 0;
}