#ifndef __CARPET__HPP__
#define __CARPET__HPP__

#include <istream>
#include <ostream>
#include <string>

using namespace std;

class Carpet {
 private:
  double length = 0;
  double width = 0;
  string color = "null";
  double price = 0;

 public:
  Carpet() = default;
  Carpet(double length, double width);
  Carpet(double length, double width, const string& color);

  double getLength();
  double getWidth();
  string getColor();
  double getPrice();

  void setLength(double length);
  void setWidth(double width);
  void setColor(const string& color);
  void setPrice(double price);

  friend ostream& operator<<(ostream& output, const Carpet& other);
  friend istream& operator>>(istream& input, Carpet& other);
};
#endif  //__CARPET__HPP__