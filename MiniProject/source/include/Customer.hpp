#ifndef CUSTOMER
#define CUSTOMER

#include <string>
#include <vector>

#include "BankAccount.hpp"

using namespace std;

class Customer {
 private:
  int id;
  string name;
  string contactInfo;
  vector<BankAccount*> accounts;

 public:
  Customer(const string& name, int id, const string& contactInfo);
  ~Customer();
  void addAccount(BankAccount* account);
  void displayCustomerInfo();
  void displayAccounts();
};

#endif