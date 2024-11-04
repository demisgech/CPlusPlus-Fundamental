#include "WithdrawTransaction.hpp"

WithdrawTransaction::WithdrawTransaction(double amount) : amount{amount} {}

void WithdrawTransaction::excute() {
  // Withdraw logic goes here
}

string WithdrawTransaction::getDatails() {
  return "Withdraw: " + to_string(amount);
}
