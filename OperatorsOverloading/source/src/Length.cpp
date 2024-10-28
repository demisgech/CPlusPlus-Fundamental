#include "Length.hpp"

#include <iostream>

Length::Length(int value) : value{value} {}

Length::Length(const Length& other) { value = other.value; }

// Inline function: replacing the the code of the function instead of fucntion
// call. This doesn't mean that use inline function over and over again. This
// means use inline function if your function has a maximun of 3 line of code
// otherwise it leads memeory wastage
inline int Length::getValue() const { return value; }

void Length::setValue(int value) { this->value = value; }

bool Length::operator==(const Length& other) const {
  return value == other.value;
}

bool Length::operator==(const int other) const { return value == other; }

bool Length::operator!=(const Length& other) const {
  // return value != other.value; // One way, but not recommended
  return !(value == other.value);  // The other way and recommended
}

bool Length::operator!=(const int other) const { return !(value == other); }

bool Length::operator<(const Length& other) const {
  return value < other.value;
}

bool Length::operator<=(const Length& other) const {
  return !(value > other.value);  // Recommended way
  // return value <= other.value; // Not recommended
}

bool Length::operator>(const Length& other) const {
  return value > other.value;
}

bool Length::operator>=(const Length& other) const {
  return !(value < other.value);  // Recommended way
  // return value >= other.value; // Not recommended
}

std::strong_ordering Length::operator<=>(const Length& other) const {
  return (value <=> other.value);
}

std::ostream& operator<<(std::ostream& stream, const Length& length) {
  stream << length.getValue();
  return stream;
}

std::istream& operator>>(std::istream& stream, Length& length) {
  int value;
  stream >> value;
  length.setValue(value);

  return stream;
}

Length Length::operator+(const Length& other) const {
  return Length(value + other.value);
}

Length Length::operator+(const int other) const {
  return Length(value + other);
}

Length Length::operator-(const Length& other) const {
  return Length(value - other.value);
}

Length Length::operator-(const int other) const {
  return Length(value - other);
}

Length Length::operator*(const Length& other) const {
  return Length(value * other.value);
}

Length Length::operator*(const int other) const {
  return Length(value * other);
}

Length Length::operator/(const Length& other) const {
  return Length(value / other.value);
}

Length Length::operator/(const int other) const {
  return Length(value / other);
}

Length Length::operator%(const Length& other) const {
  return Length(static_cast<int>(value) % static_cast<int>(other.value));
}

Length Length::operator%(const int other) const {
  return Length(static_cast<int>(value) % static_cast<int>(other));
}

Length& Length::operator++() {
  // TODO: insert return statement here
  value++;
  return (*this);
}

Length Length::operator++(int) {
  Length copy = *this;
  // value++; // no recommended
  operator++();  // Calling the operator fucntion
  return copy;
}

Length& Length::operator--() {
  // TODO: insert return statement here
  value--;
  return *this;  // Returning the current object
}

Length Length::operator--(int) {
  Length copy = *this;
  // --value; // First option but not recommended
  operator--();  // Recommended way

  return copy;
}

Length& Length::operator+=(const Length& other) {
  value += other.value;
  // NB: the pointer (this) is a memory address so to get a value you have to
  // direferrence it like this (*this)
  return *this;
}

Length& Length::operator+=(const int other) {
  value += other;
  return *this;
}

Length& Length::operator-=(const Length& other) {
  value -= other.value;
  return *this;
}

Length& Length::operator-=(const int other) {
  value -= other;
  return *this;
}

Length& Length::operator*=(const Length& other) {
  value *= other.value;
  return *this;
}

Length& Length::operator*=(const int other) {
  value *= other;
  return *this;
}

Length& Length::operator/=(const Length& other) {
  value /= other.value;
  return *this;
}

Length& Length::operator/=(const int other) {
  value /= other;
  return *this;
}

Length& Length::operator%=(const Length& other) {
  value = static_cast<int>(value);
  value %= static_cast<int>(other.value);
  return *this;
}

Length& Length::operator%=(const int other) {
  value = static_cast<int>(value);
  value /= static_cast<int>(other);
  return *this;
}

Length& Length::operator=(const Length& other) {
  std::cout << "Object assigned" << std::endl;
  value = other.value;
  return *this;
}

Length::operator int() const { return value; }
