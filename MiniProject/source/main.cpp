#include <iostream>

#include "BankAccount.hpp"
#include "CheckingAccount.hpp"
#include "Customer.hpp"
#include "SavingAccount.hpp"

using namespace std;

int main() {
  try {
    Customer* customer = new Customer("Demis", 1, "demis@gmail.com");
    BankAccount* savingAccount = new SavingAccount(1001);
    BankAccount* checkingAccount = new CheckingAccount(1002);

    customer->addAccount(savingAccount);
    customer->addAccount(checkingAccount);

    savingAccount->deposite(900.0);
    savingAccount->withdraw(1700);
    customer->displayCustomerInfo();

    checkingAccount->deposite(800.90);
    checkingAccount->withdraw(600);
    customer->displayAccounts();
  } catch (const exception& ex) {
    cout << ex.what() << endl;
  }
  return 0;
}