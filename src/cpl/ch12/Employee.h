//
// Created by JIESOUL on 2019/9/25.
//

#ifndef C_CPP_LEARN_SRC_CPL_CH12_EMPLOYEE_H
#define C_CPP_LEARN_SRC_CPL_CH12_EMPLOYEE_H
#include <string>
using std::string;
class Employee {
private:
  string first_name, family_name;
  char middle_initial;
public:
  Employee(const string& n, int d);
  void print() const;
  string full_name() const { return first_name + " " + middle_initial + " " + first_name; }
};

#endif //C_CPP_LEARN_SRC_CPL_CH12_EMPLOYEE_H
