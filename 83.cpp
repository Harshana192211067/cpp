#include <iostream>
#include <string>

 using namespace std;
 
    class Person {
    protected:
        string name;
        int age;
        static int cur_id;

    public:
        // Constructor
        Person() {
            cur_id++;
        }

        // Virtual function to get data
        virtual void getdata() {
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter age: ";
            cin >> age;
        }

        // Virtual function to put data
        virtual void putdata() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
    };

    int Person::cur_id = 0; // Initialize static member cur_id

    class Professor : public Person {
    private:
        int publications;

    public:
        // Constructor
        Professor() : publications(0) {}

        // Overridden function to get data
        void getdata() override {
            Person::getdata();
            cout << "Enter number of publications: ";
            cin >> publications;
        }

        // Overridden function to put data
        void putdata() override {
            Person::putdata();
            cout << "Publications: " << publications << endl;
            cout << "ID: " << cur_id << endl;
        }
    };

    class Student : public Person {
    private:
        int marks[6];
        static int id_counter;

    public:
        // Constructor
        Student() {
            for (int i = 0; i < 6; ++i) {
                marks[i] = 0;
            }
        }

        // Overridden function to get data
        void getdata() override {
            Person::getdata();
            cout << "Enter marks in 6 subjects: ";
            for (int i = 0; i < 6; ++i) {
                cin >> marks[i];
            }
        }

        // Overridden function to put data
        void putdata() override {
            Person::putdata();
            int sum = 0;
            for (int i = 0; i < 6; ++i) {
                sum += marks[i];
            }
            cout << "Total Marks: " << sum << endl;
            cout << "ID: " << cur_id << endl;
        }
    };

    int Student::id_counter = 0; // Initialize static member id_counter


int main() {
    int n, type;
    cout << "Enter the number of people: ";
    cin >> n;

    Person *person[n];

    for (int i = 0; i < n; ++i) {
        cout << "Enter type (1 - Professor, 2 - Student): ";
        cin >> type;
        if (type == 1) {
            person[i] = new Professor();
            person[i]->getdata();
        } else if (type == 2) {
            person[i] = new Student();
            person[i]->getdata();
        }
    }

    cout << "\nOutput:" << endl;
    for (int i = 0; i < n; ++i) {
        person[i]->putdata();
    }

    // Free memory
    for (int i = 0; i < n; ++i) {
        delete person[i];
    }

    return 0;
}

