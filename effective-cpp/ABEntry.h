//
// Created by JIESOUL on 2019/9/25.
//

#ifndef C_CPP_LEARN_SRC_EFFECTIVE_CPP_ABENTRY_H
#define C_CPP_LEARN_SRC_EFFECTIVE_CPP_ABENTRY_H
#include "PhoneNumber.h"
#include <string>
#include <list>
class ABEntry {
public:
  ABEntry(const std::string& name, const std::string& address,
      const std::list<PhoneNumber>& phones);
private:
  std::string theName;
  std::string theAddress;
  std::list<PhoneNumber> thePhones;
  int numTimesConsulted;
};

#endif //C_CPP_LEARN_SRC_EFFECTIVE_CPP_ABENTRY_H
