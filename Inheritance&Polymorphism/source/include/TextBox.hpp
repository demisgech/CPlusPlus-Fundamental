#ifndef TEXTBOX__HPP__
#define TEXTBOX__HPP__

#include <string>

#include "Widget.hpp"

class TextBox : public Widget {
 private:
  std::string value;

 public:
  // TextBox() = default;
  TextBox();
  explicit TextBox(bool enabled);
  // If you have a constructor in a dirived class that doesn't do anything in
  // this case you can inherit the constructor of the base class

  using Widget::Widget;  // Inheriting the constructor of the base class
  // explicit TextBox(const std::string& value);

  TextBox(bool enabled, const std::string& value);

  ~TextBox();
  // Overloading redefinning function with the same name and different signature
  // Overriding => Redefinning function with the same name and signature
  void draw() const override;

  std::string getValue();
  void setValue(const std::string& value);
};
#endif  // TEXTBPX__HPP__