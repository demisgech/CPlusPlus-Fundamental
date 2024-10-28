#ifndef ARRAY__HPP__
#define ARRAY__HPP__

#include <cstddef>

class Array {
 private:
  int* values;
  std::size_t size;

 public:
  Array() = default;
  explicit Array(std::size_t size);
  ~Array();
  // Overloading the subscript operator
  int& operator[](std::size_t index) const;
};
#endif  // ARRAY__HPP__