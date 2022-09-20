#include "ReduceGCD.h"
#include "ReduceGeneric.h"
#include <array>
#include <cmath>
#include <iostream>

using namespace std;
int ReduceGCD::binaryOperator(int x, int y) {
  if (y > x) {
    int temporary = y;
    y = x;
    x = temporary;
  }

  for (int i = 1; i <= y; ++i) {
    if (x % i == 0 && y % i == 0) {
      GCD = i;
    }
  }
  return GCD;
}