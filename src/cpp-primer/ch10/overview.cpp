#include <iostream>
#include <algorithm>

int main()
{
  int val = 42;
  auto result = find(vec.cbegin(), vec.end(),  val);
  std::cout << "The value " << val
            << (result == vec.cend()
                ? " is not present" : " is present") << std::endl;
}
