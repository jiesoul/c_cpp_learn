//
// Created by JIESOUL on 2019/10/11.
//
#include <iostream>
#include <string>
#include <memory>
#include <dirent.h>
#include <cstring>
#include <cerrno>
using namespace std;
class DirCloser {
 public:
  void operator () (DIR* dp) {
    if (closedir(dp) != 0) {
      std::cerr << "OOPS: closedir() failed" << std::endl;
    }
  }
};

int main()
{
  unique_ptr<DIR, DirCloser> pDir(opendir("."));

  struct dirent *dp;
  while ((dp = readdir(pDir.get())) != nullptr) {
    string filename(dp->d_name);
    cout << "process " << filename << endl;
  }
}

