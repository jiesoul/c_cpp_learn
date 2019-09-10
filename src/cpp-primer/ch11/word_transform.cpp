//
// Created by JIESOUL on 2019/9/10.
//
#include <iostream>
#include <map>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::map;
map<string, string> buildMap(ifstream &map_file) {
  map <string, string> trans_map;
  string key;
  string value;
  while (map_file >> key && getline(map_file, value)) {
    if (value.size() > 1)
      trans_map[key] = value.substr(1);
    else
      throw runtime_error("no rule for " + key);
  }
  return trans_map;
}

const string &transform(const string &s, const map<string, string> &m)
{
  auto map_it = m.find();
  if (map_it != m.cend())
    return map_it->second;
  else
    return s;
}

void word_transform(ifstream &map_file, ifstream &input)
{
  auto trans_map = buildMap(map_file);
  string text;
  while (getline(input, text)) {
    istringstream stream(text);
    string word;
    bool firstWord = true;
    while (stream >> word) {
      if (firstWord)
        firstWord = false;
      else
        cout << " ";
      cout << transform(word, trans_map);
    }
    cout << endl;
  }
}
