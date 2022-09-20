#include "FilterGeneric.h"
#include <array>
#include <iostream>
#include <vector>

using namespace std;

vector<int> FilterGeneric::filter(vector<int> g2) {
  int size = g2.size();
  if (i == size) {
    if (g(g2.back()) == false) {
      g2.pop_back();
    }
    for (int k = 0; k < size; k++) {
      cout << g2.at(k) << ' ';
    }
    cout << endl;
    i = 0;
    return g2;
  }

  else {
    if (g(g2.at(i)) == false) {
      g2.erase(g2.begin() + i);
      i--;
    }
    i++;
    return filter(g2);
  }
}
