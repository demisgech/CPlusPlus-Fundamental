#ifndef CHECKBOX__HPP__
#define CHECKBOX__HPP__

#include "Widget.hpp"

class CheckBox : public Widget {
 public:
  using Widget::Widget;
  CheckBox();
  ~CheckBox();
  void draw() const override;
};
#endif  // CHECKBOX__HPP__