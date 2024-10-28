#include <iostream>
#include <vector>
#include <string>

// BankAccount class definition
class BankAccount {
private:
    int accountNumber;
    double balance;
    std::vector<std::string> transactionHistory;

public:
    BankAccount(int accNum) : accountNumber(accNum), balance(0.0) {}

    void deposit(double amount) {
        balance += amount;
        transactionHistory.push_back("Deposit: " + std::to_string(amount));
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            transactionHistory.push_back("Withdrawal: " + std::to_string(amount));
        } else {
            std::cout << "Insufficient balance!" << std::endl;
        }
    }

    double checkBalance() {
        return balance;
    }

    void printStatement() {
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Balance: " << balance << std::endl;
        std::cout << "Transaction History:" << std::endl;
        if(transactionHistory.size())
            for (const auto& transaction : transactionHistory) {
                std::cout << transaction << std::endl;
            }
        else 
            std::cout << "Sorry! You don't have transation any more!" << std::endl;
    }
};

// Customer class definition
class Customer {
private:
    std::string name;
    int id;
    std::string contactInfo;
    std::vector<BankAccount> accounts; // List of bank accounts

public:
    Customer(std::string n, int i, std::string c) : name(n), id(i), contactInfo(c) {}

    void addAccount(BankAccount account) {
        accounts.push_back(account);
    }

    void displayCustomerInfo() {
        std::cout << "Name: " << name << ", ID: " << id << ", Contact: " << contactInfo << std::endl;
    }

    void displayAccounts() {
        std::cout << "Accounts for " << name << ":" << std::endl;
        for (auto& account : accounts) {
            account.printStatement();
        }
    }
};

int main() {
    Customer customer("John Doe", 12345, "john.doe@example.com");
    BankAccount account1(1001);
    BankAccount account2(1002);

    customer.addAccount(account1);
    customer.addAccount(account2);

    
    account1.deposit(500.0);
    account1.withdraw(200.0);
    account1.deposit(1000.45);
    account1.deposit(2000.23);
    
    customer.displayCustomerInfo();
    customer.displayAccounts();
    account1.printStatement();

    account2.deposit(1000.0);
    // customer.displayAccounts();
    
    // account1.printStatement();

    return 0;
}
