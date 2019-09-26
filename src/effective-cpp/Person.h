//
// Created by JIESOUL on 2019/9/26.
//

#ifndef C_CPP_LEARN_SRC_EFFECTIVE_CPP_PERSON_H
#define C_CPP_LEARN_SRC_EFFECTIVE_CPP_PERSON_H
#include <string>
#include <memory>
class Person {
public:
  virtual ~Person();
  virtual std::string name() const = 0;
  virtual std::string birthDay() const = 0;
  virtual std::string address() const = 0;

  static std::tr1::shared_ptr<Person> create(const std::string& name,
      const Date& birthday, const Address& addr);
};

#endif //C_CPP_LEARN_SRC_EFFECTIVE_CPP_PERSON_H
