#include "FileReader.hpp"

#include <iostream>

using namespace std;

FileReader::FileReader(const string& fileName) {
  cout << "Constructor of FileReader" << endl;
  this->fileName = fileName;
}

string FileReader::getFileName() { return "FileName"; }

string FileReader::read() {
  // The algorithm goes here for reading a file
  return fileName;
}
