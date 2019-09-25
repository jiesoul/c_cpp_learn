//
// Created by JIESOUL on 2019/9/25.
//

#ifndef C_CPP_LEARN_SRC_EFFECTIVE_CPP_PRETTYMENU_H
#define C_CPP_LEARN_SRC_EFFECTIVE_CPP_PRETTYMENU_H
#include <iostream>
class PrettyMenu {
public:
  void changeBackground(std::istream& imgSrc);
private:
  Mutex mutex;
  Image* bgImage;
  int imageChanges;
};

#endif //C_CPP_LEARN_SRC_EFFECTIVE_CPP_PRETTYMENU_H
