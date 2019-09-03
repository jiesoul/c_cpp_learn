#include <memory>
#include <iostream>
#include <string>
using std::string;
using std::allocator;
using std::cout;
using std::endl;
int main()
{
  int n = 5;
  std::allocator<string> alloc;
  auto const p = alloc.allocate(n);
  auto q = p;
  alloc.construct(q++);
  alloc.construct(q++, 10, 'c');
  alloc.construct(q++, "hi");
  cout << *p << endl;
  //cout << *q << endl;

  return 0;
}
