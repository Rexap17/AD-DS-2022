#include <ctype.h>
#include <iostream>
#include <sstream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

// Print Vector
void printVector(vector<string> input) {
  cout << "\nInput " << endl;
  for (string i : input)
    cout << i << " ";
}

// Print Stack
void printStack(stack<string> stack) {
  std::stack<string> tempStack;
  cout << "\nStack " << endl;
  while (!stack.empty()) {
    cout << stack.top() << " ";
    tempStack.push(stack.top());
    stack.pop();
  }
  while (!tempStack.empty()) {
    stack.push(tempStack.top());
    tempStack.pop();
  }
}

int findMax(vector<string> vect) {
  int max = 0;
  for (string i : vect) {
    int temp = stoi(i);
    if (temp > max) {
      max = temp;
    }
  }
  return max;
}
int findMin(vector<string> vect) {
  int min = 99;
  for (string i : vect) {
    int temp = stoi(i);
    if (temp < min) {
      min = temp;
    }
  }
  return min;
}

int main() {

  vector<string> input;
  stack<string> operatorStack;
  string letters;
  const char space = ' ';
  bool error = false;

  getline(cin, letters);
  stringstream ss(letters);

  while (getline(ss, letters, space)) {
    input.push_back(letters);
  }
  int size = input.size();

  int count = 0;
  for (string i : input) {
    if (i == "+" || i == "-" || i == "*" || i == "/") {
      operatorStack.push(i);
      count++;
    } else {
      break;
    }
  }

  for (int i = 0; i < count; i++) {
    input.erase(input.begin());
  }

  for (string i : input) {
    try {
      int temp = stoi(i);
    } catch (...) {
      error = true;
      break;
    }
  }

  int max = 0;
  int min = 0;

  if (error == false) {
    max = findMax(input);
    min = findMin(input);
  }

  int evalCount = count + 1;
  if (input.size() != evalCount || input.size() == 0 || max > 99 || min < 0 ||
      error == true) {

    cout << "Error" << endl;

  } else {

    // testing output
    // printStack(operatorStack);
    // printVector(input);

    vector<string> processInput;
    stack<string> operatorStackCopy;

    processInput = input;
    operatorStackCopy = operatorStack;

    int result = 0;

    for (int j = 0; j < count; j++) {
      string sign = operatorStackCopy.top();
      if (sign == "+") {
        result = stoi(processInput[0]) + stoi(processInput[1]);
      } else if (sign == "-") {
        result = stoi(processInput[0]) - stoi(processInput[1]);
      } else if (sign == "*") {
        result = stoi(processInput[0]) * stoi(processInput[1]);
      } else if (sign == "/") {
        result = stoi(processInput[0]) / stoi(processInput[1]);
      }
      string stringResult = to_string(result);

      operatorStackCopy.pop();

      if (input.size() >= 2) {
        processInput.erase(processInput.begin(), processInput.begin() + 2);
      } else {
        processInput.erase(processInput.begin());
      }
      processInput.insert(processInput.begin(), stringResult);
    }

    if (count == 2 && operatorStack.top() == "+" ||
        operatorStack.top() == "-") {
      cout << "(" << input[0] << " " << operatorStack.top() << " " << input[1]
           << ")";
      operatorStack.pop();
      cout << " " << operatorStack.top() << " " << input[2] << " = " << result
           << endl;
    } else if (count == 2) {
      cout << input[0] << " " << operatorStack.top() << " " << input[1];
      operatorStack.pop();
      cout << " " << operatorStack.top() << " " << input[2] << " = " << result
           << endl;
    } else if (count == 1) {
      cout << input[0] << " " << operatorStack.top() << " " << input[1] << " = "
           << result;
    } else if (count == 1) {
      cout << input[0] << " " << operatorStack.top() << " " << input[1] << " = "
           << result;
    } else {
      cout << "Error" << endl;
    }
  }
}