#ifndef NODE_H
#define NODE_H
#include <iostream>

using namespace std;

class Node{
 public:

  //constructor destructor
  Node(Student*);
  ~Node();
  
  //get next Node pointer
  Node* gextNext();

  //get student pointer
  Student* getStudent();

  //set the next pointer to the corresponding node pointer
  viod setNext(Node* );
  
 private:
  int value;
  Node*next;
  Student *student;
};
#endif
