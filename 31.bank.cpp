#include <iostream>

using namespace std;

// Base class Bank
class Bank {
public:
    // Function to return balance (0 for base class)
    virtual int getBalance() {
        return 0;
    }
};

// Subclass BankA
class BankA : public Bank {
public:
    // Function to return balance for Bank A
    int getBalance() override {
        return 10000;
    }
};

// Subclass BankB
class BankB : public Bank {
public:
    // Function to return balance for Bank B
    int getBalance() override {
        return 15000;
    }
};

// Subclass BankC
class BankC : public Bank {
public:
    // Function to return balance for Bank C
    int getBalance() override {
        return 20000;
    }
};

int main() {
    // Creating objects of each bank
    BankA bankA;
    BankB bankB;
    BankC bankC;

    // Calling getBalance function for each bank
    cout << "Balance in Bank A: Rs " << bankA.getBalance() << endl;
    cout << "Balance in Bank B: Rs " << bankB.getBalance() << endl;
    cout << "Balance in Bank C: Rs " << bankC.getBalance() << endl;

    return 0;
}

