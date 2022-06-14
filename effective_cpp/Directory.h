//
// Created by JIESOUL on 2019/9/25.
//

#ifndef C_CPP_LEARN_SRC_EFFECTIVE_CPP_DIRECTORY_H
#define C_CPP_LEARN_SRC_EFFECTIVE_CPP_DIRECTORY_H

class Directory {
public:
  Directory();
};
Directory& tempDir()
{
  static Directory td;
  return td;
}
#endif //C_CPP_LEARN_SRC_EFFECTIVE_CPP_DIRECTORY_H
