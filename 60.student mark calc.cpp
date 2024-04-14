#include <iostream>
using namespace std;

class Marks {
public:
    int rollno;
    string name;
    int marks[3];
    
    Marks(int roll, string n): rollno(roll), name(n) {}

    virtual int getTotalMarks() {
        int sum = 0;
        for(int i = 0; i < 3; i++) {
            sum += marks[i];
        }
        return sum;
    }

    void display(){
        cout << "Roll Number: " << rollno << "\nName: " << name << "\n";
    }
};

class Physics : public Marks {
private:
    int mark;
public:
    Physics(int m): Marks(0, ""), mark(m) {}

    int getTotalMarks() override {
        marks[0] = mark;
        return mark;
    }
};

class Chemistry : public Marks {
private:
    int mark;
public:
    Chemistry(int m): Marks(0, ""), mark(m) {}

    int getTotalMarks() override {
        marks[1] = mark;
        return mark;
    }
};

class Mathematics : public Marks {
private:
    int mark;
public:
    Mathematics(int m): Marks(0, ""), mark(m) {}

    int getTotalMarks() override {
        marks[2] = mark;
        return mark;
    }
};

int main() {
    int n;
    cout << "Enter the total number of students in the class: ";
    cin >> n;
    
    double totalSum = 0.0;
    string name;
    Marks* marks[n];
    
    for(int i = 0; i < n; i++) {
        cout << "Student " << (i+1) << endl;
        cout << "Enter the student name: ";
        cin >> name;
        cout << "Enter the student Physics marks: ";
        int physics;
        cin >> physics;
        cout << "Enter the student Chemistry marks: ";
        int chemistry;
        cin >> chemistry;
        cout << "Enter the student Mathematics marks: ";
        int maths;
        cin >> maths;

        marks[i] = new Marks(i + 1, name);
        marks[i]->marks[0] = physics;
        marks[i]->marks[1] = chemistry;
        marks[i]->marks[2] = maths;
    }
    
    for(int i = 0; i < n; i++) {
        cout << "Student: " << (i+1) << endl;
        marks[i]->display();
        cout << "Total marks: " << marks[i]->getTotalMarks() << endl;
        totalSum += marks[i]->getTotalMarks();
    }
    
    double average = totalSum / n;
    cout << "Total marks of the class is: " << totalSum << "\nThe average marks of the class is: " << average;
    
    // Freeing dynamically allocated memory
    for(int i = 0; i < n; i++) {
        delete marks[i];
    }

    return 0;
}

