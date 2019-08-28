#include <iostream>
#include <string>
#include <vector>
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::vector;
int main()
{
  vector<string> words;
  string w;
  while (cin >> w) {
    if (w == "\n")
      break;
    for (auto &c : w)
      c = toupper(c);
    words.push_back(w);
  }

  for (int i = 0; i < words.size(); i++) {
    cout << words[i];
    if (i % 8 == 0) {
      cout << endl;
    }
  }

  return 0;
}
