#include "FileIO.hpp"

#include <iostream>

using namespace std;

FileIO::FileIO(const string& content)
    : FileReader{content}, FileWriter{content} {
  this->content = content;
}
void FileIO::flush() { cout << "Flush...." << endl; }