#include <iostream>
#include <vector>
#include <string>
using std::cout;
using std::end;

int main()
{
  
}

void biggies(vector<string> &words, vector<string>::size_type sz)
{
  elimDups(words);
  stable_sort(words.begin(), words.end(),
              [sz](const string &a, const string &b)
              { return a.size() < b.size(); });
  auto wc = find_if(words.begin(), words.end(),
                    [sz] (const string &a)
                    { return a.size >= sz; });
  auto count = words.end() - wc;
  cout << count << " " << make_plural(count, "word", "s")
       << " of length " << sz << " or longer " << endl;
  for_each(wc, words.end(),
           [](const string &s)(count << s << " ";));
  cout << endl;
}
