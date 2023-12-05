#include "node.h"
#include "student.h"

Node::Node(Student*){
  value = 0;
  next = NULL;
}

Node::~Node(){
  delete &value;
  next = NULL;
}

Node* Node::gextNext(){
  return next;
}

void Node::setNext(Node* newnext){
  next = newnext;
}
