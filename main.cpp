#include <iostream>
#include "node.h"
#include "student.h"

using namespace std;

/*
Lina Goto
11/4/23
Linked list
 */

void add(int newvalue);
void print(Node* next);

static Node *head = NULL;

void add(int newvalue){
  Node *current = head;
  Node *newnode;
  if (current == NULL) {
    head = new Node();
    head -> setValue(newvalue);
  } else {
    while (current -> getNext() != NULL){
      current = current -> getNext();
    }
    newnode = new Node();
    current -> setNext(newnode);
    current -> getNext() -> setValue(newvalue);
  }
}

void print (Node *next) {
  if (next == head){
    cout << "list: ";
  }
  if (next != NULL) {
    cout << next -> getValue() << " ";
    print (next -> getNext());
    if (next -> getNext() == NULL) {
      cout << endl;
    }
  }
}

int main() {
  add(5);
  print(head);
  add(1);
  print(head);
  add(2);
  print(head);

  return 0;
}

