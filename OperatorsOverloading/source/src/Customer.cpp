#include "Customer.hpp"

Customer::Customer(int id, const std::string& title, const std::string& name) {
  this->id = id;
  this->title = title;
  this->name = name;
}

int Customer::getId() const { return id; }

std::string Customer::getTitle() const { return title; }

std::string Customer::getName() const { return name; }

void Customer::setId(int id) { this->id = id; }

void Customer::setTitle(const std::string& title) { this->title = title; }

void Customer::setName(const std::string& name) { this->name = name; }

std::ostream& operator<<(std::ostream& output, const Customer& customer) {
  // TODO: insert return statement here
  output << "Id: " << customer.getId() << std::endl
         << "Title: " << customer.getTitle() << std::endl
         << "Name: " << customer.getName() << std::endl;
  return output;
}

std::istream& operator>>(std::istream& input, Customer& customer) {
  // TODO: insert return statement here
  int id;
  std::string title;
  std::string name;
  input >> id >> title >> name;
  customer.setId(id);
  customer.setTitle(title);
  customer.setName(name);
  return input;
}
