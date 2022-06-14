//
// Created by JIESOUL on 2019/9/26.
//

#ifndef C_CPP_LEARN_SRC_EFFECTIVE_CPP_STUDENT_H
#define C_CPP_LEARN_SRC_EFFECTIVE_CPP_STUDENT_H
#include "Person.h"
class Student: Person {
public:
  Student();
  ~Student();
private:
  std::string schoolName;
  std::string schoolAddress;
};

#endif //C_CPP_LEARN_SRC_EFFECTIVE_CPP_STUDENT_H
