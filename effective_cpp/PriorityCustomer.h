//
// Created by jiesoul on 2019/9/25.
//

#ifndef C_CPP_LEARN_SRC_EFFECTIVE_CPP_PRIORITYCUSTOMER_H
#define C_CPP_LEARN_SRC_EFFECTIVE_CPP_PRIORITYCUSTOMER_H
#include "Customer.h"
class PriorityCustomer: Customer {
public:
  PriorityCustomer(const PriorityCustomer& rhs);
  PriorityCustomer&operator=(const PriorityCustomer& rhs);
private:
  int priority;
};

#endif //C_CPP_LEARN_SRC_EFFECTIVE_CPP_PRIORITYCUSTOMER_H
