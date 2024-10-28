#include "FileWriter.hpp"

#include <iostream>

using namespace std;
FileWriter::FileWriter(const string& content) { this->content = content; }

void FileWriter::setContent(const string& content) { this->content = content; }

string FileWriter::getFileName() { return "FileName"; }

void FileWriter::write(const string& content) { cout << content << endl; }