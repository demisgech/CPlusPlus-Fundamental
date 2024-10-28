#include "FriendOfClass.hpp"

ostream &operator<<(ostream &stream, const FriendClass &friendClass) {
  stream << friendClass.privateValue;
}

istream &operator>>(istream &stream, FriendClass &friendClass) {
  stream >> friendClass.privateValue;
  return stream;
}