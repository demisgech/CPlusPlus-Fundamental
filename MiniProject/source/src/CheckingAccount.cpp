#include "CheckingAccount.hpp"

#include <stdexcept>

#include "DepositeTransaction.hpp"
#include "InsufficientBalance.hpp"
#include "WithdrawTransaction.hpp"

using namespace std;

CheckingAccount::CheckingAccount(size_t accountNumber)
    : BankAccount(accountNumber) {}

void CheckingAccount::deposite(double amount) {
  if (amount < 0) {
    throw invalid_argument{"Amount cannot be negative!"};
  }
  balance += amount;
  addTransaction(new DepositeTransaction(amount));
}

void CheckingAccount::withdraw(double amount) {
  if (amount >= balance) {
    throw InsufficientBalance{"Sorry! you do not have enough amount."};
  }
  balance -= amount;
  addTransaction(new WithdrawTransaction(amount));
}