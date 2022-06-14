//
// Created by JIESOUL on 2019/9/25.
//

#ifndef C_CPP_LEARN_SRC_EFFECTIVE_CPP_FILESYSTEM_H
#define C_CPP_LEARN_SRC_EFFECTIVE_CPP_FILESYSTEM_H

class FileSystem {
public:
  std::size_t numDisks() const;
};
FileSystem& tfs()
{
  static FileSystem fs;
  return fs;
}
#endif //C_CPP_LEARN_SRC_EFFECTIVE_CPP_FILESYSTEM_H
