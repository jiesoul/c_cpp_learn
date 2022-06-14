//
// Created by jiesoul on 2019/9/25.
//

#include "DBConn.h"
void DBConn::close()
{
  db.close();
  closed = true;
}
DBConn::~DBConn()
{
  if (!closed) {
    try {
      db.close();
    } catch () {
      std::abort();
    }
  }

}
