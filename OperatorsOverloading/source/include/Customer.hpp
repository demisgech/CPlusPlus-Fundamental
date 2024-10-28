#ifndef CUSTOMER__HPP__
#define CUSTOMER__HPP__

#include <istream>
#include <ostream>
#include <string>

class Customer {
 private:
  int id;
  std::string title;
  std::string name;

 public:
  Customer(int id, const std::string& title, const std::string& name);

  int getId() const;
  std::string getTitle() const;
  std::string getName() const;

  void setId(int);
  void setTitle(const std::string&);
  void setName(const std::string&);
};

std::ostream& operator<<(std::ostream& output, const Customer& customer);
std::istream& operator>>(std::istream& input, Customer& customer);

#endif  // CUSTOMER__HPP__