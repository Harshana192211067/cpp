#include <iostream>
using namespace std;
class Student {
private:
    int marks[5];
public:
    void inputMarks() {
       cout << "Please enter the marks of five subjects: ";
        for (int i = 0; i < 5; ++i) {
            cin >> marks[i];
        }
    }

    int calculateTotalMarks() {
        int total = 0;
        for (int i = 0; i < 5; ++i) {
            total += marks[i];
        }
        return total;
    }

    double calculateAggregate() {
        return calculateTotalMarks() / 5.0;
    }

    char calculateGrade() {
        double aggregate = calculateAggregate();
        if (aggregate > 75)
            return 'D';
        else if (aggregate >= 60 && aggregate < 75)
            return 'F';
        else if (aggregate >= 50 && aggregate < 60)
            return 'S';
        else if (aggregate >= 40 && aggregate < 50)
            return 'T';
        else
            return 'F';
    }
};

int main() {
    Student students[10];

    // Input marks for 10 students
    for (int i = 0; i < 10; ++i) {
        cout << "Enter marks for student " << i + 1 << endl;
        students[i].inputMarks();
    }

    // Display results for each student
    for (int i = 0; i < 10; ++i) {
        cout << "Results for student " << i + 1 << ":" << std::endl;
        int totalMarks = students[i].calculateTotalMarks();
        double aggregate = students[i].calculateAggregate();
        char grade = students[i].calculateGrade();
        cout << "Total Marks      = " << totalMarks << endl;
        cout << "Average Marks    = " << aggregate << endl;
        switch (grade) {
            case 'D':
                cout << "Grade: Distinction" << endl;
                break;
            case 'F':
                cout << "Grade: First Division" << endl;
                break;
            case 'S':
                cout << "Grade: Second Division" << endl;
                break;
            case 'T':
                cout << "Grade: Third Division" << endl;
                break;
            default:
               cout << "Grade: Fail" << endl;
                break;
        }
        cout << endl;
    }

}

