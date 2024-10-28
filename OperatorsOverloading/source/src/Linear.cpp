#include "Linear.hpp"

Linear::Linear(double a, double b) : a{a}, b{b} {}

double Linear::operator()(double x) const { return a * x + b; }
