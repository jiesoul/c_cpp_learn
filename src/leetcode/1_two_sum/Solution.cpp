//
// Created by JIESOUL on 2019/9/17.
//
#include <vector>
#include <map>
#include <unordered_map>
using std::vector;
using std::unordered_map;
class Solution {
public:
  vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> m;
    for(int i = 0; i < nums.size(); i++) {
      int num = target - nums[i];
      if(m.count(num)) {
        return {m[num], i};
      }
      m[nums[i]] = i;
    }
  }
};
