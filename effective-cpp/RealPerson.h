//
// Created by JIESOUL on 2019/9/26.
//

#ifndef C_CPP_LEARN_SRC_EFFECTIVE_CPP_REALPERSON_H
#define C_CPP_LEARN_SRC_EFFECTIVE_CPP_REALPERSON_H
#include "Person.h"
class RealPerson {
public:
  RealPerson(const std::string& name, const Date& birthday, const Address& addr)
  : theName(name), theBirthDate(birthday), theAddress(addr) { }
  virtual ~RealPerson();
  std::string name() const;
  std::string birthDate() const;
  std::string address() const;
private:
  std::string theName;
  Date theBirthDate;
  Address theAddress;
};

#endif //C_CPP_LEARN_SRC_EFFECTIVE_CPP_REALPERSON_H
