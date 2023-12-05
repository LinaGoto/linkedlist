#include "node.h"
#include "student.h"

Node::Node(Student*sstudent){
  value = 0;
  next = NULL;
  student = sstudent;
}

Node::~Node(){
  delete &value;
  next = NULL;
}

Student* Node::getStudent() {
  return student;
}

Node* Node::gextNext(){
  return next;
}

void Node::setNext(Node* newnext){
  next = newnext;
}
