#include "LinkedList.h"
#include <iostream>
#include <stack>

LinkList::LinkList() { head_FLAG = false; };
LinkList::LinkList(int array[], int size){};
LinkList::~LinkList(){};

void LinkList::addFront(int newItem) {
  if (head_FLAG == false) {

    head_FLAG = true;
    stack.push(newItem);
    Node *n = new Node();
    n->data = newItem;
    n->Link = NULL;
    head = n;

  } else {

    stack.push(newItem);
    Node *n = new Node();
    n->data = newItem;
    n->Link = head;
    head = n;
  }
};

void LinkList::addEnd(int newItem) {
  if (head_FLAG == false) {

    head_FLAG = true;
    stack.push(newItem);
    Node *n = new Node();
    n->data = newItem;
    n->Link = NULL;
    head = n;

  } else {

    std::stack<int> tempStack;
    while (!stack.empty()) {
      tempStack.push(stack.top());
      stack.pop();
    }

    stack.push(newItem);
    Node *n = new Node();
    n->data = newItem;
    n->Link = head;
    head = n;

    while (!tempStack.empty()) {
      stack.push(tempStack.top());
      tempStack.pop();
    }
  }
};

void LinkList::addAtPosition(int position, int newItem) {
  position--;
  if (stack.size() > position) {
    std::stack<int> tempStack;
    for (int i = 0; i < position; i++) {
      tempStack.push(stack.top());
      stack.pop();
    }
    stack.push(newItem);
    for (int i = 0; i < position; i++) {
      stack.push(tempStack.top());
      tempStack.pop();
    }
  } else {
    this->addEnd(newItem);
  }
};

int LinkList::search(int item) {
  int count = 0;
  std::stack<int> tempStack;

  while (!stack.empty()) {
    if (stack.top() != item) {
      count++;
      tempStack.push(stack.top());
      stack.pop();
    } else {
      break;
    }
  }
  while (!tempStack.empty()) {
    stack.push(tempStack.top());
    tempStack.pop();
  }
  return count;
};

void LinkList::deleteFront() { stack.pop(); };
void LinkList::deleteEnd() {
  std::stack<int> tempStack;

  while (!stack.empty()) {
    tempStack.push(stack.top());
    stack.pop();
  }

  tempStack.pop();

  while (!tempStack.empty()) {
    stack.push(tempStack.top());
    tempStack.pop();
  }
};

void LinkList::deletePosition(int position) {
  position--;
  std::stack<int> tempStack;
  while (!tempStack.empty())
    tempStack.pop();

  for (int i = 0; i < position; i++) {
    tempStack.push(stack.top());
    stack.pop();
  }

  stack.pop();

  for (int i = 0; i < position; i++) {
    stack.push(tempStack.top());
    tempStack.pop();
  }
};

int LinkList::getItem(int position) {
  position--;
  int temp = 0;
  std::stack<int> tempStack;
  while (!tempStack.empty())
    tempStack.pop();

  for (int i = 0; i < position; i++) {
    tempStack.push(stack.top());
    stack.pop();
  }

  temp = stack.top();

  for (int i = 0; i < position; i++) {
    stack.push(tempStack.top());
    tempStack.pop();
  }

  return temp;
};

void LinkList::printItems() {
  std::stack<int> tempStack;

  while (!stack.empty()) {
    std::cout << stack.top() << " ";
    tempStack.push(stack.top());
    stack.pop();
  }
  while (!tempStack.empty()) {
    stack.push(tempStack.top());
    tempStack.pop();
  }
};

void LinkList::printItems(int input) {
  std::stack<int> tempStack;

  std::cout << input << " ";

  while (!stack.empty()) {
    std::cout << stack.top() << " ";
    tempStack.push(stack.top());
    stack.pop();
  }
  while (!tempStack.empty()) {
    stack.push(tempStack.top());
    tempStack.pop();
  }
};