#ifndef SUM__HPP__
#define SUM__HPP__

#include <ostream>
class Sum {
 private:
  double sum;

 public:
  Sum();
  //   Overloading the parenthesis operator ()
  double operator()(const double n);
  friend std::ostream& operator<<(std::ostream& stream, const Sum& sum);
};
#endif  // SUM__HPP__