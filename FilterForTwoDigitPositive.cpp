#include "FilterForTwoDigitPositive.h"
#include "FilterGeneric.h"
#include <array>
#include <cmath>
#include <iostream>

using namespace std;
bool FilterForTwoDigitPositive::g(int x) {
  if (x >= 10) {
    return true;
  } else {
    return false;
  }
}