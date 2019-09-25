//
// Created by jiesoul on 2019/9/25.
//

#ifndef C_CPP_LEARN_SRC_EFFECTIVE_CPP_DBCONN_H
#define C_CPP_LEARN_SRC_EFFECTIVE_CPP_DBCONN_H
#include "DBConnection.h"
class DBConn {
public:
  void close();
  ~DBConn();
private:
  DBConnection db;
  bool closed;
};

#endif //C_CPP_LEARN_SRC_EFFECTIVE_CPP_DBCONN_H
