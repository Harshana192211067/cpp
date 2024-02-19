#include <iostream>
#include <string>

// Define base class Employee
class Employee {
protected:
    // Member variables
    std::string Emp_name;
    int Emp_id;
    std::string Address;
    std::string Mail_id;
    long long Mobile_no;

public:
    // Constructor to initialize member variables
    Employee(const std::string& name, int id, const std::string& addr, const std::string& mail, long long mobile)
        : Emp_name(name), Emp_id(id), Address(addr), Mail_id(mail), Mobile_no(mobile) {}

    // Virtual function to generate pay slip (to be overridden in derived classes)
    virtual void generatePaySlip(double basicPay) const {
        double DA = 0.97 * basicPay;
        double HRA = 0.10 * basicPay;
        double PF = 0.12 * basicPay;
        double clubFund = 0.001 * basicPay;
        double grossPay = basicPay + DA + HRA;
        double netPay = grossPay - (PF + clubFund);

        // Output pay slip details
        std::cout << "======================\n";
        std::cout << "EMPLOYEE PAYMENT SLIP\n";
        std::cout << "======================\n";
        std::cout << "EMPLOYEE NAME: " << Emp_name << "\n";
        std::cout << "EMPLOYEE ID: " << Emp_id << "\n";
        std::cout << "ADDRESS: " << Address << "\n";
        std::cout << "E-MAIL ID: " << Mail_id << "\n";
        std::cout << "MOBILE NUMBER: " << Mobile_no << "\n";
        std::cout << "BASIC PAY: " << basicPay << "\n";
        std::cout << "DEARNESS ALLOWANCE: " << DA << "\n";
        std::cout << "HOUSE RENT ALLOWANCE: " << HRA << "\n";
        std::cout << "PROVIDENT FUND: " << PF << "\n";
        std::cout << "CLUB FUND: " << clubFund << "\n";
        std::cout << "GROSS PAY: " << grossPay << "\n";
        std::cout << "NET PAY: " << netPay << "\n";
        std::cout << "\n";
    }
};

// Define derived class Programmer
class Programmer : public Employee {
public:
    // Constructor to initialize member variables using base class constructor
    Programmer(const std::string& name, int id, const std::string& addr, const std::string& mail, long long mobile)
        : Employee(name, id, addr, mail, mobile) {}

    // Override generatePaySlip function to generate pay slip for Programmer
    void generatePaySlip(double basicPay) const override {
        // Call base class's generatePaySlip function
        Employee::generatePaySlip(basicPay);
    }
};

int main() {
    // Variables to store input data
    std::string name, address, mail;
    int id;
    long long mobile;
    double basicPay;

    // Input details from the user
    std::cout << "Enter Name of the Employee: ";
    std::getline(std::cin, name);
    std::cout << "Enter Address of the Employee: ";
    std::getline(std::cin, address);
    std::cout << "Enter ID of the Employee: ";
    std::cin >> id;
    std::cout << "Enter Mobile Number: ";
    std::cin >> mobile;
    std::cout << "Enter E-Mail ID of the Employee: ";
    std::cin >> mail;
    std::cout << "Enter the Basic Pay of the Programmer: ";
    std::cin >> basicPay;

    // Create a Programmer object
    Programmer programmer(name, id, address, mail, mobile);

    // Generate pay slip
    programmer.generatePaySlip(basicPay);

    return 0;
}

