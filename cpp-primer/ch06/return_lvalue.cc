#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

char &get_val(string &str, string::size_type ix)
{
  return str[ix];
}

int main()
{
  string s("a vlaue");
  cout << s << endl;
  get_val(s, 0) = 'A';
  cout << s << endl;
  return 0;
}
