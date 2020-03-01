//
// Created by JIESOUL on 2019/9/23.
//

#ifndef C_CPP_LEARN_SRC_CPP_PRIMER_CH13_EMPLOYEE_H
#define C_CPP_LEARN_SRC_CPP_PRIMER_CH13_EMPLOYEE_H
#include <string>
using namespace std;
class Employee {
public:
  Employee(const string& nm);
  Employee(const Employee&);
  Employee &operator=(const Employee);
private:
  string name;
  string no;
  static string id = 0;
};

#endif //C_CPP_LEARN_SRC_CPP_PRIMER_CH13_EMPLOYEE_H
