#ifndef CHECKINGACCOUNT
#define CHECKINGACCOUNT
#include "BankAccount.hpp"

class CheckingAccount : public BankAccount {
 public:
  CheckingAccount(size_t accountNumber);
  void deposite(double amount) override;
  void withdraw(double) override;
};

#endif