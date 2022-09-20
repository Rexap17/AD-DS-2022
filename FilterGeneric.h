#ifndef FILTERGENERIC_H
#define FILTERGENERIC_H
#include <array>
#include <iostream>
#include <vector>

using namespace std;
class FilterGeneric {
public:
  int i = 0;
  vector<int> filter(vector<int>);

private:
  virtual bool g(int) = 0;
};

#endif