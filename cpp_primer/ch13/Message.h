//
// Created by JIESOUL on 2019/9/11.
//

#ifndef C_CPP_LEARN_SRC_CPP_PRIMER_CH13_MESSAGE_H
#define C_CPP_LEARN_SRC_CPP_PRIMER_CH13_MESSAGE_H
#include <string>
class Message {
  friend class Folder;
public:
  explicit Message(const std::string &str = ""): contents(str) {  }
  Message(const Message&);
  Message& operator=(const Message&);
  ~Message();
  void save(Folder&);
  void remove(Folder&);
private:
  std::string contents;
  std::set<Folder*> folders;
  void add_to_Folders(const Message&);
  void remove_from_folders();
};

#endif //C_CPP_LEARN_SRC_CPP_PRIMER_CH13_MESSAGE_H
