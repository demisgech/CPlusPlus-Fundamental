#include "BankAccount.hpp"

#include <iostream>

using namespace std;

BankAccount::BankAccount(size_t accountNumber)
    : accountNumber{accountNumber}, balance{0.0} {}

void BankAccount::printStatement() {
  cout << "Account Number: " << accountNumber << endl
       << "Balance: " << balance << endl
       << "***** Transactions ****" << endl;
  for (const auto& transaction : transactions) {
    cout << transaction->getDatails() << endl;
  }
}

void BankAccount::addTransaction(ITransaction* transaction) {
  transactions.push_back(transaction);
}

BankAccount::~BankAccount() {
  for (const auto& transaction : transactions) {
    delete transaction;
  }
}