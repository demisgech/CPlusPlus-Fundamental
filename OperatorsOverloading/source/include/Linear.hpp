#ifndef LINEAR__HPP__
#define LINEAR__HPP__

class Linear {
 private:
  double a;
  double b;

 public:
  Linear(double a, double b);
  double operator()(double x) const;
};
#endif  // LINEAR__HPP__