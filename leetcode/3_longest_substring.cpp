//
// Created by jiesoul on 2019/9/26.
//
#include <string>
#include <unordered_map>
#include <iostream>
using std::string;
using std::unordered_map;
int lengthOfLongestSubstring(string s)
{
  if (s.empty()) {
    return 0;
  }
  decltype(s.size()) len = s.size();
  int max = 0;
  unordered_map<char, int> map;
  for(decltype(s.size()) i = 0; i < len; i++) {
    char c(s[i]);
    if(map.count(c)) {
      map.clear();
      map.insert({c, i});
    } else {
      map.insert({c, i});
    }
    if (map.size() > max) {
      max = map.size();
    }
  }
  return max;
}

int main()
{
  string s = "dvdf";
  int size = lengthOfLongestSubstring(s);
  std::cout << size << std::endl;
  return 0;

}