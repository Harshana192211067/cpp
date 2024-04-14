#include <iostream>
using namespace std;

class Vehicle {
private:
    string model;
    string regNumber;
    double speed; // km/hour
    double fuelCapacity; // liters
    double fuelConsumption; // kiloM
public:
    // Parameterized constructor
    Vehicle(string modelParam, string regNumberParam, double speedParam, double fuelCapacityParam, double fuelConsumptionParam) {
        model = modelParam;
        regNumber = regNumberParam;
        speed = speedParam;
        fuelCapacity = fuelCapacityParam;
        fuelConsumption = fuelConsumptionParam;
    }

    // Getters and Setters
    int setModel(string modelParam) { model = modelParam; }
    string getModel() { return model; }

    int setRegNumber(string regNumberParam) { regNumber = regNumberParam; }
    string getRegNumber() { return regNumber; }

    int setSpeed(double speedParam) { speed = speedParam; }
    double getSpeed() { return speed; }

    int setFuelCapacity(double fuelCapacityParam) { fuelCapacity = fuelCapacityParam; }
    double getFuelCapacity() { return fuelCapacity; }

    int setFuelConsumption(double fuelConsumptionParam) { fuelConsumption = fuelConsumptionParam; }
    double getFuelConsumption() { return fuelConsumption; }

    // Method to calculate fuel needed for a given distance
    double fuelNeeded(double distance) {
        return distance * fuelConsumption;
    }

    // Method to calculate distance covered for a given time
    double distanceCovered(double time) {
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

class Bus : public Vehicle {
public:
    Bus(string model, string regNumber, double speed, double fuelCapacity, double fuelConsumption)
        : Vehicle(model, regNumber, speed, fuelCapacity, fuelConsumption) {}
};

class Truck : public Vehicle {
public:
    Truck(string model, string regNumber, double speed, double fuelCapacity, double fuelConsumption)
        : Vehicle(model, regNumber, speed, fuelCapacity, fuelConsumption) {}
};

class Transport {
public:
    static void main() 
	{
        // Creating instances of Bus and Truck
        Bus bus("Volvo", "ABC123", 60, 200, 0.1);
        Truck truck("Mack", "XYZ456", 80, 300, 0.2);

        // Displaying information of Bus and Truck
        cout << "Bus Information:" << endl;
        bus.display();
        cout << endl;

        cout << "Truck Information:" << endl;
        truck.display();
        cout << endl;
    }
};

int main() {
    // Calling main method of Transport class
    Transport::main();
}

