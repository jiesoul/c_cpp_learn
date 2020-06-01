#include <iostream>
#include <algorithm>
#include <vector>
using std::vector;
int main()
{
  const vector<int> vec{10, 20, 30, 40, 50, 60, 70};
  int val = 42;
  auto result = find(vec.cbegin(), vec.end(),  val);
  std::cout << "The value " << val
            << (result == vec.cend()
                ? " is not present" : " is present") << std::endl;

}
