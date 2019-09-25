//
// Created by JIESOUL on 2019/9/23.
//

#include "Employee.h"
Employee::Employee(const string &nm): name(nm) { this.no = ++id; }
Employee::Employee(const Employee &e)
{
  this->name = e.name;
  no = ++id;
}
Employee& Employee::operator=(const Employee& e)
{
  name = e.name;
  no = ++id;
}
