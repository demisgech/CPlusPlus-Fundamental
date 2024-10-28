#ifndef FRIENDOFCLASS__HPP__
#define FRIENDOFCLASS__HPP__

#include <istream>
#include <ostream>

using namespace std;

class FriendClass {
 private:
  int privateValue;

  // A friend function or method has the ability to access private members of
  // the class
  friend ostream& operator<<(ostream& stream, const FriendClass& friendClass);
  friend istream& operator>>(istream& stream, FriendClass& friendClass);
};

ostream& operator<<(ostream& stream, const FriendClass& friendClass);
istream& operator>>(istream& stream, FriendClass& friendClass);
#endif  // FRIENDOFCLASS__HPP__