//
// Created by jiesoul on 2019/9/25.
//

#include "Customer.h"
Customer::Customer(const Customer& rhs)
:name(rhs.name)
{
  logCall("Customer copy constructor");
}
Customer& Customer::operator=(const Customer &rhs)
    {
  logCall("Customer copy assignment operator");
  name = rhs.name;
      return *this;
    }
