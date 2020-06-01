//
// Created by JIESOUL on 2019/9/25.
//

#ifndef C_CPP_LEARN_SRC_EFFECTIVE_CPP_NAMEDOBJECT_H
#define C_CPP_LEARN_SRC_EFFECTIVE_CPP_NAMEDOBJECT_H
#include <string>
template<typename T> class NamedObject {
public:
  NamedObject(const char* name, const T& value);
  NamedObject(const std::string& name, const T& value);
private:
  std::string nameValue;
  T objectValue;
};


#endif //C_CPP_LEARN_SRC_EFFECTIVE_CPP_NAMEDOBJECT_H
