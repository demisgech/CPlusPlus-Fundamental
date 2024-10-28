#ifndef MASKEDCIRCLE__HPP__
#define MASKEDCIRCLE__HPP__

#include "Circle.hpp"

// Cannot create any derivatives of MaskedCircle class because it declared as
// final
class MaskedCircle final : public Circle {
 private:
  bool masked;

 public:
  MaskedCircle() = default;
  MaskedCircle(bool masked);
  void mask();
  void unmask();
  bool isMasked() const;

  // void draw() const override; cannot overriden any more cause it declared as
  // final
};
#endif  // MASKEDCIRCLE__HPP__