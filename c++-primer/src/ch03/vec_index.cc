#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::vector;
int main()
{
  vector<unsigned> scoress(11, 0);
  unsigned grade;
  while (cin >> grade) {
    if (grade <= 100) {
      ++scoress[grade/10];
    }
  }
  return 0;
}
