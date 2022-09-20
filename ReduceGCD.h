#ifndef REDUCEGCD_H
#define REDUCEGCD_H
#include "ReduceGeneric.h"
#include <array>
#include <iostream>
#include <vector>
using namespace std;
class ReduceGCD : public ReduceGeneric {
public:
  int GCD;

private:
  int binaryOperator(int, int);
};

#endif