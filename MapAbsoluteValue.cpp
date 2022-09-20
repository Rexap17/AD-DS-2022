#include "MapAbsoluteValue.h"
#include "MapGeneric.h"
#include <array>
#include <iostream>

using namespace std;
int MapAbsoluteValue::f(int x) {
  x = abs(x);
  return x;
}