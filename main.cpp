#include "Sort.h"
#include <iostream>
//#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

using namespace std;
int main() {
  vector<int> sorted, input;
  int temp;
  QuickSort QS;
  Sort *sortQS = &QS;

  for (int i = 0; i < 8; i++) {
    cin >> temp;
    input.push_back(temp);
  }

  sorted = sortQS->sort(input);

  RecursiveBinarySearch RBS;
  bool result;
  result = RBS.search(sorted, 1);
  if (result == 0) {
    cout << "false ";
  }
  if (result == 1) {
    cout << "true ";
  }
  int size = sorted.size();
  for (int i = 0; i < size; i++) {
    cout << sorted[i] << " ";
  }
  return 0;
}