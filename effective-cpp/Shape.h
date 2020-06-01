//
// Created by JIESOUL on 2019/9/26.
//

#ifndef C_CPP_LEARN_SRC_EFFECTIVE_CPP_SHAPE_H
#define C_CPP_LEARN_SRC_EFFECTIVE_CPP_SHAPE_H
#include <string>
class Shape {
public:
  virtual void draw() const = 0;
  virtual void error(const std::string* msg);
  int objectID() const;
};

#endif //C_CPP_LEARN_SRC_EFFECTIVE_CPP_SHAPE_H
