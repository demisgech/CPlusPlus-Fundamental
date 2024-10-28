#ifndef WIDGET__HPP__
#define WIDGET__HPP__

class Widget {
 private:
  bool enabled;

 protected:
  double width;

 public:
  Widget();
  Widget(bool enabled);
  virtual ~Widget();

  // virtual ~Widget() = default;

  virtual void draw() const;

  void enable();
  void disable();
  bool isEnabled() const;
};
#endif  // WIDGET__HPP__