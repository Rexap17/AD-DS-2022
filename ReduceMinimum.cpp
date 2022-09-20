#include "ReduceMinimum.h"
#include "ReduceGeneric.h"
#include <array>
#include <cmath>
#include <iostream>

using namespace std;
int ReduceMinimum::binaryOperator(int x, int y) {
  if (x >= y) {
    return y;
  } else {
    return x;
  }
}