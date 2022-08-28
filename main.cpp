#include "Reverse.h"
#include "Truckloads.h"
#include "EfficientTruckloads.h"

#include <iostream>
#include <string>
using namespace std;

std::string getWord(string str, int num)
{
    std::string word = "";
    int count = 0;
    for (auto x : str)
    {
        if (x == ' ')
        {   
            count += 1;
            if (count == num){
              return word;
            };
            word = "";
        }
        else {
            word = word + x;
        }
    }
    return word;
}

int main(){
  Reverse R1;
  Truckloads T1;
  EfficientTruckloads E1;

  std::string input;
  std::getline(std::cin >> std::ws, input);

  std::string result = "";
  int testNum = stoi(getWord(input,1));
  result = result + std::to_string(R1.reverseDigit(testNum)) + " ";

  std::string testString = getWord(input,2);
  result = result + R1.reverseString(testString) + " ";

  result = result + std::to_string(T1.numTrucks(stoi(getWord(input,3)),stoi(getWord(input,4)))) + " ";
  result = result + std::to_string(E1.numTrucks(stoi(getWord(input,3)),stoi(getWord(input,4)))) + " ";

  cout << result << endl;

  return 0;
}
