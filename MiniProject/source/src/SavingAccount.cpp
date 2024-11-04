
#include "SavingAccount.hpp"

#include <stdexcept>

#include "DepositeTransaction.hpp"
#include "InsufficientBalance.hpp"
#include "WithdrawTransaction.hpp"

using namespace std;

SavingAccount::SavingAccount(size_t accountNumber)
    : BankAccount{accountNumber} {}

void SavingAccount::deposite(double amount) {
  if (amount < 0) {
    throw invalid_argument{"Amount cannot be negative!"};
  }
  balance += amount;
  addTransaction(new DepositeTransaction(amount));
}

void SavingAccount::withdraw(double amount) {
  if (amount >= balance) {
    throw InsufficientBalance{"Sorry! you don't have enough balance."};
  }
  balance -= amount;
  addTransaction(new WithdrawTransaction(amount));
}
