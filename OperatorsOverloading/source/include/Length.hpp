#ifndef LENGTH__HPP__
#define LENGTH__HPP__

#include <compare>
#include <istream>
#include <ostream>

class Length {
 private:
  int value;

 public:
  Length() = default;
  explicit Length(int value);
  // Length(const Length& other) = delete; // When you delete the copy
  // constructor make sure to delete the assignment operator as well otherwise
  // you will create inconsistency in your program
  Length(const Length& other);

  int getValue() const;
  void setValue(int);
  bool operator==(const Length& other) const;
  bool operator==(const int other) const;

  bool operator!=(const Length& other) const;
  bool operator!=(const int other) const;

  bool operator<(const Length& other) const;
  bool operator<=(const Length& other) const;

  bool operator>(const Length& other) const;
  bool operator>=(const Length& other) const;

  // Spaceship Operator <=> defined in the <compare> header file
  std::strong_ordering operator<=>(const Length& other) const;

  // In modern c++ we need to overload only the spaceship(<=>) and equality(==)
  // operators and the other comparison operators will automatically generated
  // by the compiler

  // Overloading arithmetic operators

  Length operator+(const Length& other) const;
  Length operator+(const int other) const;

  Length operator-(const Length& other) const;
  Length operator-(const int other) const;

  Length operator*(const Length& other) const;
  Length operator*(const int other) const;

  Length operator/(const Length& other) const;
  Length operator/(const int other) const;

  Length operator%(const Length& other) const;
  Length operator%(const int other) const;

  Length& operator++();    // Prefix
  Length operator++(int);  // Postfix

  Length& operator--();    // Prefix
  Length operator--(int);  // Postfix

  // Overloading Compound assignment operators

  Length& operator+=(const Length& other);
  Length& operator+=(const int other);

  Length& operator-=(const Length& other);
  Length& operator-=(const int other);

  Length& operator*=(const Length& other);
  Length& operator*=(const int other);

  Length& operator/=(const Length& other);
  Length& operator/=(const int other);

  Length& operator%=(const Length& other);
  Length& operator%=(const int other);

  // Overlaoding the assignment operator (=)

  Length& operator=(const Length& other);
  // Length& operator=(const Length& other) = delete;

  // Overloading type conversion operator
  // operator targetType() const; => this function doesn't have return type
  operator int() const;
  // explicit operator int() const; Explicit casting using the static_cast<>
  // operator like this => int x = static_cast<int>(object)
};

std::ostream& operator<<(std::ostream& stream, const Length& length);
std::istream& operator>>(std::istream& stream, Length& length);

#endif  // LENGTH__HPP__