#ifndef FILTERNONPOSITIVE_H
#define FILTERNONPOSITIVE_H
#include "FilterGeneric.h"
#include <array>
#include <iostream>
#include <vector>
using namespace std;
class FilterNonPositive : public FilterGeneric {

private:
  bool g(int);
};

#endif