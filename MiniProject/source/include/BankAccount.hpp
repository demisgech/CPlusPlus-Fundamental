#ifndef BANKACCOUNT
#define BANKACCOUNT
#include <vector>

#include "ITransaction.hpp"

using namespace std;

// Abstract Base class for BankAccount
class BankAccount {
 protected:
  size_t accountNumber;
  double balance;
  vector<ITransaction*> transactions;

 public:
  BankAccount(size_t accountNumber);
  virtual ~BankAccount();
  virtual void deposite(double amount) = 0;
  virtual void withdraw(double amount) = 0;
  virtual void printStatement();
  void addTransaction(ITransaction* transactions);
};
#endif