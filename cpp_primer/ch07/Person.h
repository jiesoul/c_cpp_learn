//
// Created by JIESOUL on 2019/9/19.
//

#ifndef C_CPP_LEARN_SRC_CPP_PRIMER_CH07_PERSON_H
#define C_CPP_LEARN_SRC_CPP_PRIMER_CH07_PERSON_H
#include <string>
using namespace std;
class Person {
  friend istream &read(istream&, Person&);
  friend ostream &print(ostream&, const Person&);
public:
  Person() = default;
  Person(const string &n, const string &a): name(n), address(a) { }
  istream &read(istream &is, Person &p);
  ostream &print(ostream &os, const Person &p);
  string get_name() const;
  string get_address() const;
private:
  string name;
  string address;
};

#endif //C_CPP_LEARN_SRC_CPP_PRIMER_CH07_PERSON_H
