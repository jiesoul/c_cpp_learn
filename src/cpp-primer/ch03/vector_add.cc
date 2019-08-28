#include <iostream>
#include <vector>
using std::cin;
using std::vector;

int main()
{
  vector<int> v2;
  for (int i = 0; i != 100; ++i) {
    v2.push_back(i);
  }

  string word;
  vector<string> text;
  while (cin >> word)
    text.push_back(word);

  return 0;
}
