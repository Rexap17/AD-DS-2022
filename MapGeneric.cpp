#include "MapGeneric.h"
#include <array>
#include <iostream>

using namespace std;

vector<int> MapGeneric::map(vector<int> g1) {
  int size = g1.size();
  if (i == (size - 1)) {
    g1.back() = (f(g1.at(i)));
    for (int k = 0; k < (size); k++) {
      cout << g1.at(k) << ' ';
    }
    cout << endl;
    i = 0;
    return g1;
  }

  else {
    g1.at(i) = f(g1.at(i));
    i++;
    return map(g1);
  }
}