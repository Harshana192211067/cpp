#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    int empid;
    string name;
    float salary;

public:
    // Constructor
    Employee(int _empid, const string& _name, float _salary) {
        empid = _empid;
        name = _name;
        salary = _salary;
    }

    // Member function to display employee details
    void displayDetails() {
        cout << "Employee ID: " << this->empid << endl;
        cout << "Name: " << this->name << endl;
        cout << "Salary: " << this->salary << endl;
    }
};

int main() {
    // Creating an object of Employee class
    Employee emp1(101, "John Doe", 50000.0);

    // Calling the displayDetails() function
    emp1.displayDetails();

    return 0;
}

