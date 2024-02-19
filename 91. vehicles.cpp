#include <iostream>
#include <string>

using namespace std;

// Base class Vehicle
class Vehicle {
protected:
    string model;
    string regNumber;
    float speed; // km/hour
    float fuelCapacity; // liters
    float fuelConsumption; // kiloM

public:
    // Parameterized constructor
    Vehicle(string model, string regNumber, float speed, float fuelCapacity, float fuelConsumption)
        : model(model), regNumber(regNumber), speed(speed), fuelCapacity(fuelCapacity), fuelConsumption(fuelConsumption) {}

    // Getters and setters
    string getModel() const { return model; }
    void setModel(string model) { this->model = model; }

    string getRegNumber() const { return regNumber; }
    void setRegNumber(string regNumber) { this->regNumber = regNumber; }

    float getSpeed() const { return speed; }
    void setSpeed(float speed) { this->speed = speed; }

    float getFuelCapacity() const { return fuelCapacity; }
    void setFuelCapacity(float fuelCapacity) { this->fuelCapacity = fuelCapacity; }

    float getFuelConsumption() const { return fuelConsumption; }
    void setFuelConsumption(float fuelConsumption) { this->fuelConsumption = fuelConsumption; }

    // Method to calculate fuel needed for given distance
    float fuelNeeded(float distance) {
        float fuelNeeded = 0;
        for (int i = 0; i < distance; ++i) {
            fuelNeeded += fuelConsumption;
        }
        return fuelNeeded;
    }

    // Method to calculate distance covered for given time
    float distanceCovered(float time) {
        return speed * time;
    }

    // Method to display vehicle information
    void display() {
        cout << "Model: " << model << endl;
        cout << "Registration Number: " << regNumber << endl;
        cout << "Speed: " << speed << " km/hour" << endl;
        cout << "Fuel Capacity: " << fuelCapacity << " liters" << endl;
        cout << "Fuel Consumption: " << fuelConsumption << " kiloM" << endl;
    }
};

// Derived class Bus from Vehicle
class Bus : public Vehicle {
public:
    // Constructor using base class constructor
    Bus(string model, string regNumber, float speed, float fuelCapacity, float fuelConsumption)
        : Vehicle(model, regNumber, speed, fuelCapacity, fuelConsumption) {}
};

// Derived class Truck from Vehicle
class Truck : public Vehicle {
public:
    // Constructor using base class constructor
    Truck(string model, string regNumber, float speed, float fuelCapacity, float fuelConsumption)
        : Vehicle(model, regNumber, speed, fuelCapacity, fuelConsumption) {}
};

// Driver class Transport
int main() {
    // Create objects of Bus and Truck
    Bus myBus("Volvo", "BUS123", 60, 200, 0.3);
    Truck myTruck("Scania", "TRUCK456", 80, 300, 0.4);

    // Display vehicle information
    cout << "Bus Information:" << endl;
    myBus.display();
    cout << endl;

    cout << "Truck Information:" << endl;
    myTruck.display();
    cout << endl;

    // Example usage of methods
    float distance = 100; // distance in kilometers
    float time = 2; // time in hours

    float fuelNeeded = myBus.fuelNeeded(distance);
    cout << "Fuel needed for " << distance << " kilometers by Bus: " << fuelNeeded << " liters" << endl;

    float distanceCovered = myTruck.distanceCovered(time);
    cout << "Distance covered by Truck in " << time << " hours: " << distanceCovered << " kilometers" << endl;

    return 0;
}

