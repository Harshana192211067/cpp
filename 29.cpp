#include <iostream>
using namespace std;

class Student {
private:
	string name;
    int age;
    string address;

public:
    // Constructor with default values
    Student() : name("unknown"), age(0), address("not available") {}

    // Function to set name and age
    void setInfo(string studentName, int studentAge) {
        name = studentName;
        age = studentAge;
    }

    // Function to set name, age, and address
    void setInfo(string studentName, int studentAge, string studentAddress) {
        name = studentName;
        age = studentAge;
        address = studentAddress;
    }

    // Function to print student details
    void printInfo() {
        cout << "Name: " << name << ", Age: " << age << ", Address: " << address << endl;
    }
};

int main() {
    Student students[10];
	string name, address;
        int age;
    // Prompt the user to input information for each student
    for (int i = 0; i < 10; ++i) {     
        // Prompt the user to input student details
        cout << "Enter details for student " << i + 1 << ":" << endl;
        cout << "Name: ";
        cin >> name;
        cout << "Age: ";
        cin >> age;
        cout << "Address: ";
        cin >> address;

        // Set the information for the current student
        students[i].setInfo(name, age, address);
    }

    // Printing information of all students
    for (int i = 0; i < 10; ++i) {
        cout << "Details for student " << i + 1 << ":" << endl;
        students[i].printInfo();
    }

    return 0;
}


