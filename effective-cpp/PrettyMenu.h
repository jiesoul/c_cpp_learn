//
// Created by JIESOUL on 2019/9/25.
//

#ifndef C_CPP_LEARN_SRC_EFFECTIVE_CPP_PRETTYMENU_H
#define C_CPP_LEARN_SRC_EFFECTIVE_CPP_PRETTYMENU_H
#include <iostream>
struct PMImpl {
  std::tr1::shared_ptr<Image> bgImage;
  int imageChanges;
};
class PrettyMenu {
public:
  void changeBackground(std::istream& imgSrc);
private:
  Mutex mutex;
  std::tr1::shared_ptr<PMImpl> pImpl;
};

#endif //C_CPP_LEARN_SRC_EFFECTIVE_CPP_PRETTYMENU_H
