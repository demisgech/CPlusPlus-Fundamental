#ifndef FILEIO__HPP__
#define FILEIO__HPP__

#include <string>

#include "FileReader.hpp"
#include "FileWriter.hpp"

using namespace std;

class FileIO : public FileReader, public FileWriter {
 private:
  string content;

 public:
  explicit FileIO(const string& content);
  void flush();
};
#endif