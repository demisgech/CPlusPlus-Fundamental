#if !defined(SAVINGACCOUNT)
#define SAVINGACCOUNT

#include <cstdlib>

#include "BankAccount.hpp"

using namespace std;

class SavingAccount : public BankAccount {
 public:
  SavingAccount(size_t accountNumber);
  void deposite(double amount) override;
  void withdraw(double amount) override;
};
#endif  // SAVINGACCOUNT
