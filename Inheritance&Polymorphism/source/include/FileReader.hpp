#ifndef FILEREADER__HPP__
#define FILEREADER__HPP__

#include <string>

using namespace std;

class FileReader {
 private:
  string fileName;

 public:
  FileReader(const string& fileName);

  string getFileName();
  string read();
};
#endif