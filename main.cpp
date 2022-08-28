#include "Reverse.h"
#include "Truckloads.h"

#include <iostream>
using namespace std;

int main(){
  // question 1
  Reverse R1;

  int testNum = 54321;
  cout << testNum << endl;
  cout <<  R1.reverseDigit(testNum) << endl;

  std::string testString = "World";
  cout << testString << endl;
  cout << R1.reverseString(testString) << endl;

  //question 2
  Truckloads T1;
  cout << T1.numTrucks(1024,5) << endl;

  return 0;
}
