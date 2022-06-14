//
// Created by JIESOUL on 2019/9/11.
//

#include "Message.h"
void Message::save(Folder &f)
{
  folders.insert(&f);
  f.addMsg(this);
}
void Message::remove(Folder &f)
{
  folders.erase(&f);
  f.remMsg(this);
}
void Message::add_to_Folders(const Message &m)
{
  for (auto f : m.folders) {
    f->addMsg(this);
  }
}
Message::Message(const Message &m):
  contents(m.contents), folders(m.folders)
{
  add_to_Folders(m);
}
void Message::remove_from_folders()
{
  for (auto f : folders)
    f->remMsg(this);
}
Message:~Message()
{
  remove_from_folders();
}
Message& Message& Message::operator=(const Message &rhs)
{
  remove_from_folders();
  contents = rhs.contents;
  folders = rhs.folders;
  add_to_Folders(rhs);
  return *this;
}
void swap(Message &lhs, Message &rhs)
{
  using std::swap;
  for (auto f : lhs.folders)
    f->remMsg(&this);
  for (auto f : rhs.folders)
    f->remMsg(*this);
  swap(lhs.folders, rhs.folders);
  swap(lhs.contents, rhs.contents);
  for (auto f : lhs.folders)
    f->addMsg(&lhs);
  for (auto f : rhs.folders)
    f->addMsg(&this):
}
