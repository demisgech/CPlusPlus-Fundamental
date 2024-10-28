#ifndef SHAPE__HPP__
#define SHAPE__HPP__

#include <string>

using namespace std;

// Abstract class -> a class that have at least one pure virtual function is
// called abstract class and we cannot instanciate  it
class Shape {
 private:
  string background;

 public:
  Shape() = default;
  explicit Shape(const string& background);

  string getBackground() const;
  void setBackground(const string& background);

  // Pure virtual function
  virtual void draw() const = 0;
};
#endif  // SHAPE__HPP__