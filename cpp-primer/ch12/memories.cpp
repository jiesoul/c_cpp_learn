#include <memory>
#include <iostream>
#include <list>
#include <string>
using std::string;
using std::list;
using std::shared_ptr;
using std::make_shared;
using std::cout;
using std::endl;

int main()
{
  shared_ptr<string> p1;
  shared_ptr<list<int>> p2;
  if (p1 && p1->empty()) {
    *p1 = "hi";
  }
  cout << "p1 value is " << *p1 << endl;

  shared_ptr<int> p3 = make_shared<int>(42);
  shared_ptr<string> p4 = make_shared<string>(10, '0');
  shared_ptr<int> p5 = make_shared<int>();
  cout << "p3 value is " << p3 << endl;
  cout << "p4 value is " << p4 << endl;
  cout << "p5 value is " << p5 << endl;

  auto p6 = make_shared<vector<string>>();

  auto p = make_shared<int>(42);
  auto q(p);
  return 0;
}
