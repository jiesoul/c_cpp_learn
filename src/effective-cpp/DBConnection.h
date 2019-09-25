//
// Created by jiesoul on 2019/9/25.
//

#ifndef C_CPP_LEARN_SRC_EFFECTIVE_CPP_DBCONNECTION_H
#define C_CPP_LEARN_SRC_EFFECTIVE_CPP_DBCONNECTION_H

class DBConnection {
public:
  static DBConnection create();

  void close();
};

#endif //C_CPP_LEARN_SRC_EFFECTIVE_CPP_DBCONNECTION_H
