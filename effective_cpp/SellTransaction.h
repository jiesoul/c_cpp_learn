//
// Created by jiesoul on 2019/9/25.
//

#ifndef C_CPP_LEARN_SRC_EFFECTIVE_CPP_SELLTRANSACTION_H
#define C_CPP_LEARN_SRC_EFFECTIVE_CPP_SELLTRANSACTION_H
#include "Transaction.h"
class SellTransaction: Transaction {
public:
  virtual void logTransaction() const;

};

#endif //C_CPP_LEARN_SRC_EFFECTIVE_CPP_SELLTRANSACTION_H
