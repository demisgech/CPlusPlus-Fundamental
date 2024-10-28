#include "Sum.hpp"

Sum::Sum() : sum{0} {}

double Sum::operator()(const double n) {
  sum += n;
  return sum;
}

std::ostream& operator<<(std::ostream& stream, const Sum& sum) {
  stream << sum.sum;
  return stream;
}
