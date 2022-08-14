#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>

using namespace std;

class Player {
private:

    char move;

public:

    Player();
    virtual char makeMove();
    virtual string getName();
    virtual void reset() = 0;
    ~Player();
};

#endif