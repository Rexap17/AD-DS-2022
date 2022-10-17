#ifndef NODE_H
#define NODE_H
#include <vector>

class Node {
public:
  Node();

  int data;
  Node *Link;

  int getData();
  int getLink();
  void setData(int newData);
  void setLink(Node *newLink);
};

#endif

/*class NODE {
public:
  NODE *link;
  int data;
  static int position;

  NODE() {
    int NODE::position = 0;

    link = new NODE;
    position++;
  }
  static int getPosition() { return position; }
};*/