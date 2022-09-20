#ifndef FILTERFORTWODIGITPOSITIVE_H
#define FILTERFORTWODIGITPOSITIVE_H
#include "FilterGeneric.h"
#include <array>
#include <iostream>
#include <vector>
using namespace std;
class FilterForTwoDigitPositive : public FilterGeneric {
private:
  bool g(int);
};

#endif