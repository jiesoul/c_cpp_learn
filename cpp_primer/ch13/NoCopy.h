//
// Created by JIESOUL on 2019/9/11.
//

#ifndef C_CPP_LEARN_SRC_CPP_PRIMER_CH13_NOCOPY_H
#define C_CPP_LEARN_SRC_CPP_PRIMER_CH13_NOCOPY_H

class NoCopy {
  NoCopy() = default;
  NoCopy(const NoCopy&) = delete;
  NoCopy &operator=(const NoCopy&) = delete;
  ~NoCopy() = default;
};

#endif //C_CPP_LEARN_SRC_CPP_PRIMER_CH13_NOCOPY_H
