#ifndef FILTERODD_H
#define FILTERODD_H
#include "FilterGeneric.h"
#include <array>
#include <iostream>
#include <vector>
using namespace std;
class FilterOdd : public FilterGeneric {
private:
  bool g(int);
};

#endif