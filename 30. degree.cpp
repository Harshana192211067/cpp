#include <iostream>

using namespace std;

// Base class Degree
class Degree {
public:
    // Function to print degree
    void getDegree() {
        cout << "I got a degree" << endl;
    }
};

// Subclass Undergraduate
class Undergraduate : public Degree {
public:
    // Function to print undergraduate degree
    void getDegree() {
        cout << "I am an Undergraduate" << endl;
    }
};

// Subclass Postgraduate
class Postgraduate : public Degree {
public:
    // Function to print postgraduate degree
    void getDegree() {
        cout << "I am a Postgraduate" << endl;
    }
};

int main() {
    // Creating objects of each class
    Degree degree;
    Undergraduate undergraduate;
    Postgraduate postgraduate;

    // Calling function of each object
    degree.getDegree();
    undergraduate.getDegree();
    postgraduate.getDegree();

    return 0;
}

