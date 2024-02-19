#include <iostream>
#include <string>

class Student {
public:
    std::string name;
    // Constructor with default argument
    Student(std::string n = "Unknown") : name(n) {}

    // Method to get the name of the student
    std::string getName() {
        return name;
    }
};
int main() {
    // Create instances of the Student class with different names
    Student student1; // No name passed, default name "Unknown" will be set
    Student student2("John"); // Name "John" passed

    // Print the names of the students
    std::cout << "Student 1: " << student1.getName() << std::endl;
    std::cout << "Student 2: " << student2.getName() << std::endl;
  
}

