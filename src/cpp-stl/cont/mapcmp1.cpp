//
// Created by jiesoul on 2019/10/15.
//
#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

class RuntimeStringCmp {
 public:
  enum cmp_mode {normal, nocase};
 private:
  const cmp_mode mode;

  static bool nocase_compare (char c1, char c2) {
    return toupper(c1) < toupper(c2);
  }

 public:
  RuntimeStringCmp(cmp_mode m = normal) : mode(m) { }

  bool operator() (const string& s1, const string& s2) const {
    if (mode == normal) {
      return s1 < s2;
    } else {
      return lexicographical_compare(s1.begin(),s1.end(), s2.begin(), s2.end(), nocase_compare);
    }
  }
};

typedef map<string,string,RuntimeStringCmp> StringStringMap;
void fillAndPrint(StringStringMap& coll);

int main()
{
  StringStringMap coll1;
  fillAndPrint(coll1);

  RuntimeStringCmp ignorecase(RuntimeStringCmp::nocase);

  StringStringMap coll2(ignorecase);
  fillAndPrint(coll2);
}

void fillAndPrint(StringStringMap& coll)
{
  coll["Deutschland"] = "Germany";
  coll["deutsch"] = "German";
  coll["Haken"] = "snag";
  coll["arbeiten"] = "work";
  coll["hund"] = "dog";
  coll["gehen"] = "go";
  coll["Unternehmen"] = "enterprise";
  coll["unternehmen"] = "undertake";
  coll["gehen"] = "walk";
  coll["Bestatter"] = "undertaker";

  cout.setf(ios::left, ios::adjustfield);
  for (const auto& elem : coll) {
    cout << setw(15) << elem.first << " " << elem.second << endl;
  }
  cout << endl;
}
