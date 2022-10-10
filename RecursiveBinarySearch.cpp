#include "RecursiveBinarySearch.h"
#include <iostream>
#include <vector>
using namespace std;

bool function(std::vector<int> x, int y, int pivot, int low, int high) {
  pivot = (low + (high - low)) / 2;
  if (x[pivot] == y) {
    return true;
  } else if (low == high) {
    return false;
  } else if (y < x[pivot]) {
    high = pivot - 1;
    return function(x, y, low, pivot, high);
  } else if (y > x[pivot]) {
    low = pivot + 1;
    return function(x, y, low, pivot, high);
  }
  return true;
}

bool RecursiveBinarySearch::search(std::vector<int> x, int y) {
  int low = 0;
  int high = x.size() - 1;
  int pivot = (low + (high - low)) / 2;
  bool output = function(x, y, low, pivot, high);
  return output;
}