#include <iostream>

#include "FileIO.hpp"

using namespace std;

int main() {
  FileIO file{"Text.txt"};
  string result = file.read();
  cout << "Result: " << result << endl;

  string fileName = file.FileReader::getFileName();
  cout << "File Name: " << fileName << endl;
  return 0;
}