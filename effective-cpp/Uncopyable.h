//
// Created by jiesoul on 2019/9/25.
//

#ifndef C_CPP_LEARN_SRC_EFFECTIVE_CPP_UNCOPYABLE_H
#define C_CPP_LEARN_SRC_EFFECTIVE_CPP_UNCOPYABLE_H

class Uncopyable {
protected:
  Uncopyable();
  ~Uncopyable();
private:
  Uncopyable(const Uncopyable&);
  Uncopyable& operator=(const Uncopyable&);
};

#endif //C_CPP_LEARN_SRC_EFFECTIVE_CPP_UNCOPYABLE_H
