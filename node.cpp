#include "node.h"

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

Student* Student::getStudent(){
  return student;
}

void Node::setNext(Node* newnext){
  next = newnext;
}
