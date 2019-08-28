#include <iostream>
#include <string>
#include <vector>
using std::vector;
int main()
{
  vector<string> svec;
  vector<int> ivec;
  vector<int> ivec2(ivec);
  vector<int> ivec3 = ivec;
  vector<string> svec(ivec2);  //error type int to string

  vector<string> artices = {"a", "an", "the"};
  vector<string> v1{"a", "an", "the"};
  vector<string> v2("a", "an", "the"); //error

  vector<int> ivec1(1-, -1);
  vector<int> svec1(10, "hi!");

  vector<int> ivec2(10);
  vector<string> svec2(10);

  vector<int> vi = 10; //error

  vector<int> v1(10); //10元素 值为0
  vector<int> v2{10}; // 1元素 值为10
  vector<int> v3(10, 1); // 10元素 值为1 
  vector<int> v4{10, 1}; // 2元素 值为10和1
  return 0;
}
