//
// Created by zhangyunjie on 2019/12/2.
//
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
  string filename,basename, extname;
  const int actor(atoi(argv[1]));
  if (actor <= 0) {
    cout << "split line number must is integer, but you gave me : " << argv[1] << endl;
    return EXIT_FAILURE;
  }
  filename = argv[2];
  string::size_type  idx = filename.find('.');
  basename = filename.substr(0, idx);
  extname = filename.substr(idx+1);
  cout << "file: " << filename;
  cout << " will be split multi files by per " << actor << " lines." << endl;

  ifstream file(filename);
  if (!file) {
    cout << "I can't found file: " << filename << ", please check filename" << endl;
    return EXIT_FAILURE;
  }
  string line;
  string content;
  int counter(1);
  int file_mid(1);
  while (getline(file, line)) {
    content.append(line);
    if (counter >= actor || file.eof()) {
      string name(basename + "_" + to_string(file_mid) + "." + extname);
      ofstream outfile(name);
      outfile << content;
      counter = 0;
      file_mid++;
      content = "";
      cout << "create file: " << name << endl;
    } else {
      content.append("\n");
    }
    counter++;
  }
  return 0;
}

