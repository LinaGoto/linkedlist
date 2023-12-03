#include <iostream>
#include "node.h"

using namespace std;

void add(int newvalue);
void print(Node* next);

Node* head = NULL;

int main(){

}

void add(int newvalue){
  Node* current = head;
  if (current == NULL){
    head = new Node();
    head->setValue(newvalue);
  }
}  
