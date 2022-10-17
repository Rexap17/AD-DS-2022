#ifndef LINKLIST_H
#define LINKLIST_H
#include "Node.h"
#include <array>
#include <stack>

class LinkList {
public:
  bool head_FLAG; 

  Node *head;
  std::stack<int> stack;

  LinkList();
  LinkList(int array[], int size);
  ~LinkList();

  void addFront(int newItem);
  void addEnd(int newItem);
  void addAtPosition(int position, int newItem);
  int search(int item);
  void deleteFront();
  void deleteEnd();
  void deletePosition(int position);
  int getItem(int position);
  void printItems();
  void printItems(int input);
};

#endif