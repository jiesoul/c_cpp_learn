//
// Created by JIESOUL on 2019/9/19.
//

#include "Person.h"
string Person::get_name() const
{
  return this->name;
}
string Person::get_address() const
{
  return this->address;
}
istream &read(istream &is, Person &p)
{
  is >> p.name >> p.address;
  return is;
}
ostream &print(ostream &os, const Person &p)
{
  os << p.name << " " << p.address;
  return os;
}
