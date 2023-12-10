#include <iostream>
#include "node.h"
#include "student.h"

/*
Lina Goto
11/4/23
Linked list
 */

void add(int newvalue);
void print(Node* next);

using namespace std;

Node* head = NULL;

void add(int newvalue){
  Node* current = head;
  if (current == NULL){
    head = new Node();
    head -> setValue(newvalue);
  }
  else {
    while (current -> getNext() != NULL){
      current = current -> getNext();
    }
    current -> setNext(new Node());
    current -> getNext() -> setValue(newvalue);
  }
}

void print (Node* next){
  if (next == head){
    cout << "list: ";
  }
  if(next != NULL){
    cout << next -> getVakue() << " ";
    print (next -> getNext());
}

int main(){
  add(5);
  print(head);
}

