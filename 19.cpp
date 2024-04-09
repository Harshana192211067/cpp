#include <iostream>
#include <string>
using namespace std;
class Car 
{

public:
    string brand;

    // Constructor to initialize the brand field with "Ford"
    Car() : brand("Ford") {}
	

    // Method to get the brand
    string getBrand() {
        return brand;
    }
};

int main() {
    // Create an instance of the Car class
    Car myCar;

    // Call the getBrand() method and store the value in a variable
    string carBrand = myCar.getBrand();

    // Print the value of the brand
    cout << "Brand of the car: " << carBrand << endl;

}

