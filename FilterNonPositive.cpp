#include "FilterNonPositive.h"
#include "FilterGeneric.h"
#include <array>
#include <cmath>
#include <iostream>

using namespace std;
bool FilterNonPositive::g(int x) {
  if (x >= 0) {
    return false;
  } else {
    return true;
  }
}