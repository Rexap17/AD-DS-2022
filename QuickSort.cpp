#include "QuickSort.h"
#include <iostream>
#include <vector>
using namespace std;

int rearrange(vector<int> &list, int low, int high) {
  int pivot = list[high];
  int i = low - 1;
  for (int j = low; j < high; j++) {
    if (list[j] < pivot) {
      i++;
      swap(list[i], list[j]);
    }
  }
  swap(list[i + 1], list[high]);
  return (i + 1);
}
void quicksort(vector<int> &list, int low, int high) {

  if (low < high) {
    int p_index = rearrange(list, low, high);
    quicksort(list, low, p_index - 1);
    quicksort(list, p_index + 1, high);
  }
}
vector<int> QuickSort::sort(vector<int> list) {
  if (list.size() == 1) {
    return list;
  }
  if (list.size() == 2) {
    if (list.at(0) > list.at(1)) {
      swap(list.at(1), list.at(0));
      return list;
    }
    if (list.at(0) < list.at(1)) {
      return list;
    }
  }
  if (list.size() > 2) {
    int high = list.size() - 1;
    quicksort(list, 0, high);
    return list;
  }
  return list;
}
