#include "ReduceGeneric.h"
#include <array>
#include <iostream>
#include <vector>

using namespace std;

int ReduceGeneric::reduce(vector<int> g3) {
  int size = g3.size();
  if (i + 1 == size) {
    g3.back() = binaryOperator(g3.at(i), g3.back());
    cout << g3.back() << endl;
    i = 0;
    return g3.back();
  }

  else {

    g3.at(i + 1) = binaryOperator(g3.at(i), g3.at(i + 1));
    i++;
    return reduce(g3);
  }
}
