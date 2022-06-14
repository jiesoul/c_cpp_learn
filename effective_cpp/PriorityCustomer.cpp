//
// Created by jiesoul on 2019/9/25.
//

#include "PriorityCustomer.h"
PriorityCustomer::PriorityCustomer(const PriorityCustomer &rhs)
: priority(rhs.priority)
{
  logCall("PriorityCustomer copy constructor");
}
PriorityCustomer& PriorityCustomer::operator=(const PriorityCustomer &rhs)
    {
      logCall("PriorityCustomer copy assignment operator");
      Customer::operator=(rhs);
      priority = rhs.priority;
      return *this;
    }
