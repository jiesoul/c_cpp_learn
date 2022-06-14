//
// Created by JIESOUL on 2019/9/17.
//
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
  unordered_map<int, int> m;
  for(int i = 0; i < nums.size(); i++) {
    int num = target - nums[i];
    if(m.count(num)) {
      return {m[num], i};
    }
    m[nums[i]] = i;
  }
  return {};
}

int main()
{
  vector<int> vec{2, 7, 11, 15};
  int target = 9;
  vector<int> result = twoSum(vec, target);
  for(auto &v : result)
    cout << v << endl;
//  cout << result << endl;
  return 0;
}


