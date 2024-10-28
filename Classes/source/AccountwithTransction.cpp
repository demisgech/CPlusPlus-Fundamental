#include <iostream>
#include <vector>
#include <string>

// Interface for Transactions
class ITransaction {
public:
    virtual void execute() = 0;
    virtual std::string getDetails() = 0;
};

// Abstract Base Class for BankAccount
class BankAccount {
protected:
    int accountNumber;
    double balance;
    std::vector<ITransaction*> transactions;

public:
    BankAccount(int accNum) : accountNumber(accNum), balance(0.0) {}

    virtual void deposit(double amount) = 0;
    virtual void withdraw(double amount) = 0;
    virtual void printStatement() {
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Balance: " << balance << std::endl;
        std::cout << "Transactions:" << std::endl;
        for (auto& transaction : transactions) {
            std::cout << transaction->getDetails() << std::endl;
        }
    }

    void addTransaction(ITransaction* transaction) {
        transactions.push_back(transaction);
    }

    virtual ~BankAccount() {
        for (auto transaction : transactions) {
            delete transaction;
        }
    }
};

// Concrete Classes for Different Account Types
class SavingsAccount : public BankAccount {
public:
    SavingsAccount(int accNum) : BankAccount(accNum) {}

    void deposit(double amount) override {
        balance += amount;
        addTransaction(new DepositTransaction(amount));
    }

    void withdraw(double amount) override {
        if (amount <= balance) {
            balance -= amount;
            addTransaction(new WithdrawalTransaction(amount));
        } else {
            std::cout << "Insufficient balance!" << std::endl;
        }
    }
};

class CheckingAccount : public BankAccount {
public:
    CheckingAccount(int accNum) : BankAccount(accNum) {}

    void deposit(double amount) override {
        balance += amount;
        addTransaction(new DepositTransaction(amount));
    }

    void withdraw(double amount) override {
        if (amount <= balance) {
            balance -= amount;
            addTransaction(new WithdrawalTransaction(amount));
        } else {
            std::cout << "Insufficient balance!" << std::endl;
        }
    }
};

// Concrete Transaction Classes
class DepositTransaction : public ITransaction {
private:
    double amount;

public:
    DepositTransaction(double amt) : amount(amt) {}

    void execute() override {
        // Deposit logic here
    }

    std::string getDetails() override {
        return "Deposit: " + std::to_string(amount);
    }
};

class WithdrawalTransaction : public ITransaction {
private:
    double amount;

public:
    WithdrawalTransaction(double amt) : amount(amt) {}

    void execute() override {
        // Withdrawal logic here
    }

    std::string getDetails() override {
        return "Withdrawal: " + std::to_string(amount);
    }
};

// Customer Class
class Customer {
private:
    std::string name;
    int id;
    std::string contactInfo;
    std::vector<BankAccount*> accounts;

public:
    Customer(std::string n, int i, std::string c) : name(n), id(i), contactInfo(c) {}

    void addAccount(BankAccount* account) {
        accounts.push_back(account);
    }

    void displayCustomerInfo() {
        std::cout << "Name: " << name << ", ID: " << id << ", Contact: " << contactInfo << std::endl;
    }

    void displayAccounts() {
        std::cout << "Accounts for " << name << ":" << std::endl;
        for (auto& account : accounts) {
            account->printStatement();
        }
    }

    ~Customer() {
        for (auto account : accounts) {
            delete account;
        }
    }
};

int main() {
    Customer customer("John Doe", 12345, "john.doe@example.com");
    BankAccount* savingsAccount = new SavingsAccount(1001);
    BankAccount* checkingAccount = new CheckingAccount(1002);

    customer.addAccount(savingsAccount);
    customer.addAccount(checkingAccount);

    customer.displayCustomerInfo();
    savingsAccount->deposit(500.0);
    savingsAccount->withdraw(200.0);
    customer.displayAccounts();

    checkingAccount->deposit(1000.0);
    customer.displayAccounts();

    return 0;
}
