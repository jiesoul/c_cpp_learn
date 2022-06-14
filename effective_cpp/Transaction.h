//
// Created by jiesoul on 2019/9/25.
//

#ifndef C_CPP_LEARN_SRC_EFFECTIVE_CPP_TRANSACTION_H
#define C_CPP_LEARN_SRC_EFFECTIVE_CPP_TRANSACTION_H
#include <string>
class Transaction {
public:
  explicit Transaction(const std::string& logInfo);
  void logTransaction(const std::string& logInfo) const;
private:
  void init();
};

#endif //C_CPP_LEARN_SRC_EFFECTIVE_CPP_TRANSACTION_H
