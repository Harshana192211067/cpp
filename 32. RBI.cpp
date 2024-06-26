#include <iostream>
#include <string>
using namespace std;

// Base class RBI
class RBI {
public:
    // Virtual function for RBI guidelines for minimum interest rate
    virtual double getMinimumInterestRate() {
        return 4.0; // 4% annually by default
    }

    // Virtual functions for other RBI guidelines
    virtual double getMinimumBalance() = 0;
    virtual double getMaximumWithdrawalLimit() = 0;
};

// Derived class SBI (State Bank of India)
class SBI : public RBI {
public:
    // Implementing RBI guidelines for SBI
    double getMinimumBalance() override {
        return 500.0; // Rs 500 minimum balance
    }

    double getMaximumWithdrawalLimit() override {
        return 50000.0; // Rs 50,000 maximum withdrawal limit
    }
};

// Derived class ICICI
class ICICI : public RBI {
public:
    // Implementing RBI guidelines for ICICI
    double getMinimumBalance() override {
        return 1000.0; // Rs 1000 minimum balance
    }

    double getMaximumWithdrawalLimit() override {
        return 75000.0; // Rs 75,000 maximum withdrawal limit
    }
};

// Derived class PNB (Punjab National Bank)
class PNB : public RBI {
public:
    // Implementing RBI guidelines for PNB
    double getMinimumBalance() override {
        return 1000.0; // Rs 1000 minimum balance
    }

    double getMaximumWithdrawalLimit() override {
        return 60000.0; // Rs 60,000 maximum withdrawal limit
    }
};

// Class representing a customer
class Customer {
private:
    string name;
public:
    Customer(string _name) : name(_name) {}

    // Function to get customer's name
    string getName() {
        return name;
    }
};

// Class representing a bank account
class Account {
private:
    Customer& customer;
    RBI& bank;
    double balance;
public:
    // Constructor
    Account(Customer& _customer, RBI& _bank, double _balance) : 
        customer(_customer), bank(_bank), balance(_balance) {}

    // Function to get minimum interest rate from the bank
    double getMinimumInterestRate() {
        return bank.getMinimumInterestRate();
    }

    // Function to get minimum balance required from the bank
    double getMinimumBalance() {
        return bank.getMinimumBalance();
    }

    // Function to get maximum withdrawal limit from the bank
    double getMaximumWithdrawalLimit() {
        return bank.getMaximumWithdrawalLimit();
    }

    // Function to display account details
    void display() {
        cout << "Customer Name: " << customer.getName() << endl;
        cout << "Minimum Interest Rate: " << getMinimumInterestRate() << "%" << endl;
        cout << "Minimum Balance Required: Rs " << getMinimumBalance() << endl;
        cout << "Maximum Withdrawal Limit: Rs " << getMaximumWithdrawalLimit() << endl;
        cout << "Current Balance: Rs " << balance << endl;
    }
};

int main() {
    // Creating customers
    Customer customer1("John");
    Customer customer2("Alice");

    // Creating bank objects
    SBI sbi;
    ICICI icici;
    PNB pnb;

    // Creating accounts
    Account account1(customer1, sbi, 10000.0);
    Account account2(customer2, icici, 15000.0);
    Account account3(customer1, pnb, 20000.0);

    // Displaying account details
    cout << "Account 1 Details:" << endl;
    account1.display();
    cout << endl;

    cout << "Account 2 Details:" << endl;
    account2.display();
    cout << endl;

    cout << "Account 3 Details:" << endl;
    account3.display();
    cout << endl;

    return 0;
}

