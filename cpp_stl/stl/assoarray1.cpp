//
// Created by JIESOUL on 2019/10/11.
//
#include <unordered_map>
#include <string>
#include <iostream>
using namespace std;

int main()
{
  unordered_map<string,float> coll;
  coll["VAT1"] = 0.16;
  coll["VAT2"] = 0.07;
  coll["Pi"] = 3.1415;
  coll["an arbitrary number"] = 4983.223;
  coll["Null"] = 0;
  
  coll["VAT1"] += 0.03;
  cout << "VAT difference: " << coll["VAT1"] - coll["VAT2"] << endl;
}

