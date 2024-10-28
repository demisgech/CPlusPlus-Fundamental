#include "Array.hpp"

#include <stdexcept>

Array::Array(std::size_t size) {
  values = new int[size];
  this->size = size;
}

Array::~Array() { delete[] values; }

int& Array::operator[](std::size_t index) const {
  if (index < 0 || index >= size) throw std::invalid_argument("Index: ");
  return values[index];
}
