#include "FilterOdd.h"
#include "FilterGeneric.h"
#include <array>
#include <cmath>
#include <iostream>

using namespace std;
bool FilterOdd::g(int x) {
  if (x % 2 == 0) {
    return false;
  } else {
    return true;
  }
}