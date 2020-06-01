//
// Created by jiesoul on 2019/9/25.
//

#include "Transaction.h"
Transaction::Transaction(const std::string& logInfo)
{
  logTransaction(logInfo);
}
void Transaction::init()
{
  logTransaction();
}
