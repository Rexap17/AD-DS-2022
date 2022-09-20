#ifndef REDUCEMINIMUM_H
#define REDUCEMINIMUM_H
#include "ReduceGeneric.h"
#include "ReduceMinimum.h"
#include <array>
#include <iostream>
#include <vector>
using namespace std;
class ReduceMinimum : public ReduceGeneric {
private:
  int binaryOperator(int, int);
};

#endif