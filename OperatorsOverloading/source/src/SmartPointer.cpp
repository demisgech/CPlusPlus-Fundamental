#include "SmartPointer.hpp"

SmartPointer::SmartPointer(int* ptr) { this->ptr = ptr; }

SmartPointer::~SmartPointer() {
  delete ptr;
  ptr = nullptr;
}

int& SmartPointer::operator*() { return *ptr; }
