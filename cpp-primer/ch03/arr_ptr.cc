#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
  string nums[] = {"one", "two", "three"};
  string *p = &nums[0];
  string *p2 = nums;
  cout << "*p *p2 is eq: " << (*p == *p2) << endl;

  int ia[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  auto ia2(ia);
  // ia2 = 42;  // error ia2 is a pointer.
  decltype(ia) ia3 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  ia3 = p;
  ia3[4] = i;

  int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int *p = arr;
  ++p;

  for (int *b = arr; b != e; ++b) {
    cout << *b << endl;
  }

  return 0;
}
