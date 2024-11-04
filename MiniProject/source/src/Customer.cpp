#include "Customer.hpp"

#include <iostream>

using namespace std;

Customer::Customer(const string& name, int id, const string& contactInfo)
    : name{name}, id{id}, contactInfo{contactInfo} {}

Customer::~Customer() {
  for (const auto& account : accounts) {
    delete account;
  }
}

void Customer::addAccount(BankAccount* account) { accounts.push_back(account); }

void Customer::displayCustomerInfo() {
  cout << "Name: " << name << endl
       << "ID: " << id << endl
       << "Contact: " << contactInfo << endl;
}

void Customer::displayAccounts() {
  for (const auto& account : accounts) {
    account->printStatement();
  }
}