#include <iostream>
#include <vector>
#include <list>
#include "../ch07/Sales_data.h"
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::list;

int main()
{
  list<string> authors = {"Miltom", "Shakespeare", "Austen"};
  vector<const char*> = {"a", "an", "the"};
  list<string> list2(authors);

  cout << authors.begin() << endl;
  cout << authors.rbegin() << endl;
  cout << authors.cbegin() << endl;
  cout << authors.crbegin() << endl;

  return 0;
}
