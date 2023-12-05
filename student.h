#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

using namespace std;

class Student{
 public:

  //get next Student pointer
  class Student* getNext(void);

 private:
  int value;
  class Student*next;
};
#endif
