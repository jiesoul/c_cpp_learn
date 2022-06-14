//
// Created by JIESOUL on 2019/9/26.
//

#include "RealPerson.h"
std::tr1::shared_ptr<Person> Person::create(const std::string &name, const Date &birthday, const Address &addr)
{
  return std::tr1::shared_ptr<Person>(new RealPerson(name, birthday, addr));
}
