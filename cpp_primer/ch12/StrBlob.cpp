#include <string>
#include <vector>
#include <memory>
#include "StrBlob.hpp"
using std::vector;
using std::string;
StrBlob::StrBlob(): data(std::make_shared<vector<string>>()) { }
StrBlob::StrBlob(std::initializer_list<string> il):
  data(std::make_shared<vector<string>>(il)) { }

void StrBlob::check(size_type i, const string &msg) const
{
  if (i >= data->size()) {
    throw std::out_of_range(msg);
  }
}

string& StrBlob::front()
{
  check(0, "front on empty StrBlob");
  return data->front();
}

string& StrBlob::back()
{
  check(0, "back on empty StrBlob");
  return data->back();
}
void StrBlob::pop_back()
{
  check(0, "pop_back on emtpy StrBlob");
  data->pop_back();
}
