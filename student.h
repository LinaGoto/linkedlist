#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

using namespace std;

class Student{
 public:

  //get next Student pointer
  Student* gextNext();

 private:
  int value;
  Student*next;
};
#endif
