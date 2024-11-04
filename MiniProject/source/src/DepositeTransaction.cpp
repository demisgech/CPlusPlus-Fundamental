#include "DepositeTransaction.hpp"

DepositeTransaction::DepositeTransaction(double amount) : amount{amount} {}

void DepositeTransaction::excute() {
  // Deposite Logic goes here
}

string DepositeTransaction::getDatails() {
  return "Deposite: " + to_string(amount);
}
