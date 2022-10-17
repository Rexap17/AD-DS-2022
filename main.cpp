#include "LinkList.h"
#include "Node.h"
#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

int main() {

  LinkList List;

  // defaultStack are numbers before the letters,
  // functionStack are numbers after the letters
  vector<int> defaultStack, functionStack;
  string runFunction;

  /*defaultStack.push_back(45);
  defaultStack.push_back(20);
  defaultStack.push_back(2);
  defaultStack.push_back(10);

  functionStack.push_back(3);
  functionStack.push_back(0);

  runFunction = "GI";

  char new_input[20];
  bool flag = false;

  std::cin.getline(new_input, 20);*/
  int input;
  int rawInput;
  for (int i = 0; i < 7; i++) {
    if (i < 4) {
      cin >> input;
      defaultStack.push_back(input);
    } else if (i < 5) {
      cin >> runFunction;
    } else {
      cin >> input;
      functionStack.push_back(input);
    }
  }

  int temp;
  // Before Letter
  for (int i : defaultStack)
    List.addEnd(i);
  // After Letter
  if (runFunction == "AF") {
    List.addFront(functionStack[0]);
    List.printItems();
  } else if (runFunction == "AE") {
    List.addEnd(functionStack[0]);
    List.printItems();
  } else if (runFunction == "AP") {
    List.addAtPosition(functionStack[0], functionStack[1]);
    List.printItems();
  } else if (runFunction == "S") {
    temp = List.search(functionStack[0]);
    List.printItems(temp);
  } else if (runFunction == "DF") {
    List.deleteFront();
    List.printItems();
  } else if (runFunction == "DE") {
    List.deleteEnd();
    List.printItems();
  } else if (runFunction == "DP") {
    List.deletePosition(functionStack[0]);
    List.printItems();
  } else if (runFunction == "GI") {
    temp = List.getItem(functionStack[0]);
    List.printItems(temp);
  }

  /*
  // function testing code
  int item = 12;
  int item0 = 19;
  int item1 = 125;

  LinkList List;

  List.addFront(1);
  List.addFront(2);
  List.addFront(3);
  List.addFront(4);
  List.addFront(5);
  List.addEnd(item1);
  List.addAtPosition(1, item0);
  cout << "First print" << endl;
  List.printItems();

  List.deleteFront();
  List.deleteEnd();
  List.deletePosition(1);
  cout << "\nSecond print" << endl;
  List.printItems();

  cout << "\nSearch: " << List.search(1);
  cout << "\nItem: " << List.getItem(2);
  */

  return 0;
}