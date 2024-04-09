/*In this program:

We have a base class Person with a pure virtual function displayRole().
We have two derived classes, Woman and Man, representing different roles.
Each derived class overrides the displayRole() function to display the specific roles and responsibilities.
In the main() function, we create objects of Woman and Man classes using a pointer to the base class Person, which allows us to demonstrate runtime polymorphism.
Depending on the object being pointed to, the appropriate version of displayRole() function is called at runtime*/

#include <iostream>
class Person {						// Base class Person
public:
    virtual void displayRole() = 0; // Pure virtual function for displaying role
};

// Derived class representing a woman
class Woman : public Person {
public:
    void displayRole() override {
        std::cout << "Woman plays roles such as mother, wife, daughter, daughter in law, sister, etc." << std::endl;
    }
};

// Derived class representing a man
class Man : public Person {
public:
    void displayRole() override {
        std::cout << "Man behaves as an employee in an office, son or husband at home, customer at a mall, etc." << std::endl;
    }
};

int main() {
    Person *person;

    // Creating an object of Woman class and displaying its role
    person = new Woman();
    std::cout << "Woman: ";
    person->displayRole();

    // Creating an object of Man class and displaying its role
    person = new Man();
    std::cout << "Man: ";
    person->displayRole();

    delete person;

    return 0;
}

