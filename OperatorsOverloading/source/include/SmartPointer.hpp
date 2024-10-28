#ifndef SMARTPOINTER__HPP__
#define SMARTPOINTER__HPP__

class SmartPointer {
 private:
  int* ptr;

 public:
  SmartPointer() = default;
  explicit SmartPointer(int* ptr);
  ~SmartPointer();
  //   Overloading the indirection operator(*)
  int& operator*();
};

#endif  // SMARTPOINTER__HPP__