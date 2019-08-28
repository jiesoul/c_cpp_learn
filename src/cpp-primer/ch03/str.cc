#include <iostream>
#include <string>
using std::string;
int main()
{
  string s1;
  string s2 = s1;
  string s3 = "hiya";
  string s4(10, 'c');
  std::cout << "s1 is " << s1 << std::endl;
  std::cout << "s2 is " << s2 << std::endl;
  std::cout << "s3 is " << s3 << std::endl;
  std::cout << "s4 is " << s4 << std::endl;
  return 0;
}
