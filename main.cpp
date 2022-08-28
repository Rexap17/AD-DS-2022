#include "Reverse.h"

#include <iostream>
using namespace std;

int main(){
  Reverse R1;

  int testNum = 54321;
  cout << testNum << endl;
  cout <<  R1.reverseDigit(testNum) << endl;

  std::string testString = "World";
  cout << testString << endl;
  cout << R1.reverseString(testString) << endl;

  return 0;
}
