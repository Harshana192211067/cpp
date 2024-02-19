#include <iostream>
#include <string>

// Base class: Vehicle
class Vehicle {
protected:
    double mileage;
    double price;

public:
    Vehicle(double _mileage, double _price) : mileage(_mileage), price(_price) {}
};

// Subclass 1: Car
class Car : public Vehicle {
protected:
    double ownershipCost;
    int warrantyYears;
    int seatingCapacity;
    std::string fuelType;

public:
    Car(double _mileage, double _price, double _ownershipCost, int _warrantyYears, int _seatingCapacity, const std::string& _fuelType)
        : Vehicle(_mileage, _price), ownershipCost(_ownershipCost), warrantyYears(_warrantyYears), seatingCapacity(_seatingCapacity), fuelType(_fuelType) {}
};

// Subclass 2: Bike
class Bike : public Vehicle {
protected:
    int numCylinders;
    int numGears;
    std::string coolingType;
    std::string wheelType;
    double fuelTankSize;

public:
    Bike(double _mileage, double _price, int _numCylinders, int _numGears, const std::string& _coolingType, const std::string& _wheelType, double _fuelTankSize)
        : Vehicle(_mileage, _price), numCylinders(_numCylinders), numGears(_numGears), coolingType(_coolingType), wheelType(_wheelType), fuelTankSize(_fuelTankSize) {}
};

// Subclasses of Car
class Audi : public Car {
private:
    std::string modelType;

public:
    Audi(double _mileage, double _price, double _ownershipCost, int _warrantyYears, int _seatingCapacity, const std::string& _fuelType, const std::string& _modelType)
        : Car(_mileage, _price, _ownershipCost, _warrantyYears, _seatingCapacity, _fuelType), modelType(_modelType) {}

    void printInfo() const {
        std::cout << "Audi Car Information:" << std::endl;
        std::cout << "Model Type: " << modelType << std::endl;
        std::cout << "Ownership Cost: " << ownershipCost << std::endl;
        std::cout << "Warranty (Years): " << warrantyYears << std::endl;
        std::cout << "Seating Capacity: " << seatingCapacity << std::endl;
        std::cout << "Fuel Type: " << fuelType << std::endl;
        std::cout << "Mileage: " << mileage << std::endl;
        std::cout << "Price: " << price << std::endl;
    }
};

class Ford : public Car {
private:
    std::string modelType;

public:
    Ford(double _mileage, double _price, double _ownershipCost, int _warrantyYears, int _seatingCapacity, const std::string& _fuelType, const std::string& _modelType)
        : Car(_mileage, _price, _ownershipCost, _warrantyYears, _seatingCapacity, _fuelType), modelType(_modelType) {}

    void printInfo() const {
        std::cout << "Ford Car Information:" << std::endl;
        std::cout << "Model Type: " << modelType << std::endl;
        std::cout << "Ownership Cost: " << ownershipCost << std::endl;
        std::cout << "Warranty (Years): " << warrantyYears << std::endl;
        std::cout << "Seating Capacity: " << seatingCapacity << std::endl;
        std::cout << "Fuel Type: " << fuelType << std::endl;
        std::cout << "Mileage: " << mileage << std::endl;
        std::cout << "Price: " << price << std::endl;
    }
};

// Subclasses of Bike
class Bajaj : public Bike {
private:
    std::string makeType;

public:
    Bajaj(double _mileage, double _price, int _numCylinders, int _numGears, const std::string& _coolingType, const std::string& _wheelType, double _fuelTankSize, const std::string& _makeType)
        : Bike(_mileage, _price, _numCylinders, _numGears, _coolingType, _wheelType, _fuelTankSize), makeType(_makeType) {}

    void printInfo() const {
        std::cout << "Bajaj Bike Information:" << std::endl;
        std::cout << "Make Type: " << makeType << std::endl;
        std::cout << "Number of Cylinders: " << numCylinders << std::endl;
        std::cout << "Number of Gears: " << numGears << std::endl;
        std::cout << "Cooling Type: " << coolingType << std::endl;
        std::cout << "Wheel Type: " << wheelType << std::endl;
        std::cout << "Fuel Tank Size: " << fuelTankSize << std::endl;
        std::cout << "Mileage: " << mileage << std::endl;
        std::cout << "Price: " << price << std::endl;
    }
};

class TVS : public Bike {
private:
    std::string makeType;

public:
    TVS(double _mileage, double _price, int _numCylinders, int _numGears, const std::string& _coolingType, const std::string& _wheelType, double _fuelTankSize, const std::string& _makeType)
        : Bike(_mileage, _price, _numCylinders, _numGears, _coolingType, _wheelType, _fuelTankSize), makeType(_makeType) {}

    void printInfo() const {
        std::cout << "TVS Bike Information:" << std::endl;
        std::cout << "Make Type: " << makeType << std::endl;
        std::cout << "Number of Cylinders: " << numCylinders << std::endl;
        std::cout << "Number of Gears: " << numGears << std::endl;
        std::cout << "Cooling Type: " << coolingType << std::endl;
        std::cout << "Wheel Type: " << wheelType << std::endl;
        std::cout << "Fuel Tank Size: " << fuelTankSize << std::endl;
        std::cout << "Mileage: " << mileage << std::endl;
        std::cout << "Price: " << price << std::endl;
    }
};

int main() {
    // Create objects and print information
    Audi audiCar(20.0, 5000000.0, 20000.0, 3, 5, "Petrol", "A6");
    Ford fordCar(18.0, 4000000.0, 18000.0, 2, 5, "Petrol", "Mustang");
    Bajaj bajajBike(40.0, 120000.0, 1, 5, "Air", "Alloys", 10.0, "Pulsar");
    TVS tvsBike(35.0, 100000.0, 1, 4, "Liquid", "Spokes", 9.0, "Apache");

    audiCar.printInfo();
    std::cout << "\n--------------------------------\n" << std::endl;
    fordCar.printInfo();
    std::cout << "\n--------------------------------\n" << std::endl;
    bajajBike.printInfo();
    std::cout << "\n--------------------------------\n" << std::endl;
    tvsBike.printInfo();

    return 0;
}

