#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int age;
    std::string address;

public:
    // Constructor with default values
    Student() : name("unknown"), age(0), address("not available") {}

    // Function to set name and age
    void setInfo(std::string studentName, int studentAge) {
        name = studentName;
        age = studentAge;
    }

    // Function to set name, age, and address
    void setInfo(std::string studentName, int studentAge, std::string studentAddress) {
        name = studentName;
        age = studentAge;
        address = studentAddress;
    }

    // Function to print student details
    void printInfo() {
        std::cout << "Name: " << name << ", Age: " << age << ", Address: " << address << std::endl;
    }
};

int main() {
    // Array of Student objects
    Student students[10];

    // Assigning information to students
    students[0].setInfo("Alice", 20, "123 Main St");
    students[1].setInfo("Bob", 21, "456 Elm St");
    students[2].setInfo("Charlie", 22, "789 Oak St");
    students[3].setInfo("David", 23, "101 Pine St");
    students[4].setInfo("Eve", 24, "202 Maple St");
    students[5].setInfo("Frank", 25, "303 Cedar St");
    students[6].setInfo("Grace", 26, "404 Walnut St");
    students[7].setInfo("Henry", 27, "505 Birch St");
    students[8].setInfo("Ivy", 28, "606 Spruce St");
    students[9].setInfo("Jack", 29, "707 Sycamore St");

    // Printing information of all students
    for (int i = 0; i < 10; ++i) {
        students[i].printInfo();
    }

    return 0;
}

