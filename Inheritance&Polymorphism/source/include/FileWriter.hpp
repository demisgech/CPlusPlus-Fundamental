#ifndef FILEWRITER__HPP__
#define FILEWRITER__HPP__
#include <string>

using namespace std;

class FileWriter {
 private:
  string content;

 public:
  FileWriter(const string& content);
  void setContent(const string& content);

  string getFileName();
  void write(const string& content);
};
#endif