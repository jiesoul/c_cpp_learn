//
// Created by jiesoul on 2019/9/25.
//

#ifndef C_CPP_LEARN_SRC_EFFECTIVE_CPP_CUSTOMER_H
#define C_CPP_LEARN_SRC_EFFECTIVE_CPP_CUSTOMER_H
#include <string>
void logCall(const std::string& funcName);
class Customer {
public:
  Customer(const Customer&);
  Customer&operator=(const Customer&);
private:
  std::string name;
  Date lastTransaction;

};

#endif //C_CPP_LEARN_SRC_EFFECTIVE_CPP_CUSTOMER_H
