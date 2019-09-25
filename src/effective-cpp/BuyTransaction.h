//
// Created by jiesoul on 2019/9/25.
//

#ifndef C_CPP_LEARN_SRC_EFFECTIVE_CPP_BUYTRANSACTION_H
#define C_CPP_LEARN_SRC_EFFECTIVE_CPP_BUYTRANSACTION_H
#include "Transaction.h"
class BuyTransaction : public Transaction {
public:
  BuyTransaction(): Transaction(createLogString());
  virtual void logTransaction() const;
private:
  static std::string createLogString();
};

#endif //C_CPP_LEARN_SRC_EFFECTIVE_CPP_BUYTRANSACTION_H
