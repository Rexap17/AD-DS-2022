#ifndef MAPGENERIC_H
#define MAPGENERIC_H
#include <array>
#include <iostream>
#include <vector>
using namespace std;
class MapGeneric {
public:
  int i = 0;
  vector<int> map(vector<int>);

private:
  virtual int f(int) = 0;
};
#endif
