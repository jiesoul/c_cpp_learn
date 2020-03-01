#include <iostream>
#include <fstream>
#include <sstream>
using std::ofstream;
using std::cin;
using std::cout;
int main()
{
  // ofstream out1, out2;
  // out1 = out2;
  // ofstream print(ofstream);
  // out2 = print(out2);
  auto old_state = cin.rdstate();
  cin.clear();
  process_input(cin);
  cin_setstate(old_state);
  return 0;
}
