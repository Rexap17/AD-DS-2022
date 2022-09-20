#ifndef REDUCEGENERIC_H
#define REDUCEGENERIC_H
#include <array>
#include <iostream>
#include <vector>

using namespace std;
class ReduceGeneric {
public:
  int i = 0;
  int reduce(vector<int>);

private:
  virtual int binaryOperator(int, int) = 0;
};

#endif