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

void copyVector(vector<string> vect1, vector<string> vect2) {
  for (int i = 0; i < vect1.size(); i++)
    vect2.push_back(vect1[i]);
}

int main() {
  std::cout << "Hello World!\n";

  vector<string> input;
  stack<string> operatorStack;
  string letters;
  const char space = ' ';

  getline(cin, letters);
  stringstream ss(letters);

  while (getline(ss, letters, space)) {
    input.push_back(letters);
  }
  int size = input.size();

  int count = 0;
  for (string i : input)
    if (i == "+" || i == "-" || i == "*" || i == "/") {
      operatorStack.push(i);
      count++;
    } else {
      break;
    }

  for (int i = 0; i < count; i++) {
    input.erase(input.begin());
  }

  int evalCount = count + 1;
  if (input.size() != evalCount) {
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
      cout << result << endl;

      operatorStackCopy.pop();

      if (input.size() >= 2) {
        processInput.erase(processInput.begin(), processInput.begin() + 2);
      } else {
        processInput.erase(processInput.begin());
      }
      processInput.insert(processInput.begin(), stringResult);
    }

    if (count >= 2) {
      cout << "(" << input[0] << " " << operatorStack.top() << " " << input[1]
           << ")";
      operatorStack.pop();
      cout << " " << operatorStack.top() << " " << input[2] << " = " << result
           << endl;
    }
  }
}