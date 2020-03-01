//
// Created by JIESOUL on 2019/9/24.
//

#ifndef C_CPP_LEARN_SRC_CPL_CH02_STACK_H
#define C_CPP_LEARN_SRC_CPL_CH02_STACK_H

class Stack {
  char* v;
  int top;
  int max_size;
public:
  class Underflow { };
  class Overflow { };
  class Bad_size { };

  Stack(int s);
  ~Stack();

  void push(char c);
  char pop();
};

#endif //C_CPP_LEARN_SRC_CPL_CH02_STACK_H
