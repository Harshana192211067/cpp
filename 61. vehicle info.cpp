#include <iostream>
#include <string>

// Base class Vehicle
class Vehicle {
public:
    float mileage;
    float price;

public:
    Vehicle(float mileage, float price) : mileage(mileage), price(price) {}
};

// Subclass Car
class Car : public Vehicle {
public:
    float ownershipCost;
    int warranty;
    int seatingCapacity;
    std::string fuelType;

public:
    Car(float mileage, float price, float ownershipCost, int warranty, int seatingCapacity, std::string fuelType)
        : Vehicle(mileage, price), ownershipCost(ownershipCost), warranty(warranty), seatingCapacity(seatingCapacity), fuelType(fuelType) {}
};

// Subclass Bike
class Bike : public Vehicle {
public:
    int numCylinders;
    int numGears;
    std::string coolingType;
    std::string wheelType;
    float fuelTankSize;

public:
    Bike(float mileage, float price, int numCylinders, int numGears, std::string coolingType, std::string wheelType, float fuelTankSize)
        : Vehicle(mileage, price), numCylinders(numCylinders), numGears(numGears), coolingType(coolingType), wheelType(wheelType), fuelTankSize(fuelTankSize) {}
};

// Subclass Audi of Car
class Audi : public Car {
public:
    std::string modelType;

public:
    Audi(float mileage, float price, float ownershipCost, int warranty, int seatingCapacity, std::string fuelType, std::string modelType)
        : Car(mileage, price, ownershipCost, warranty, seatingCapacity, fuelType), modelType(modelType) {}
};

// Subclass Ford of Car
class Ford : public Car {
public:
    std::string modelType;

public:
    Ford(float mileage, float price, float ownershipCost, int warranty, int seatingCapacity, std::string fuelType, std::string modelType)
        : Car(mileage, price, ownershipCost, warranty, seatingCapacity, fuelType), modelType(modelType) {}
};

// Subclass Bajaj of Bike
class Bajaj : public Bike {
public:
    std::string makeType;

public:
    Bajaj(float mileage, float price, int numCylinders, int numGears, std::string coolingType, std::string wheelType, float fuelTankSize, std::string makeType)
        : Bike(mileage, price, numCylinders, numGears, coolingType, wheelType, fuelTankSize), makeType(makeType) {}
};

// Subclass TVS of Bike
class TVS : public Bike {
public:
    std::string makeType;

public:
    TVS(float mileage, float price, int numCylinders, int numGears, std::string coolingType, std::string wheelType, float fuelTankSize, std::string makeType)
        : Bike(mileage, price, numCylinders, numGears, coolingType, wheelType, fuelTankSize), makeType(makeType) {}
};

int main() {
    // Creating objects for Audi and Ford cars
    Audi audi(15.5, 5000000, 1000000, 5, 5, "Petrol", "A6");
    Ford ford(12.5, 4000000, 900000, 4, 5, "Diesel", "Figo");

    // Creating objects for Bajaj and TVS bikes
    Bajaj bajaj(45, 150000, 2, 5, "Air", "Spokes", 10, "Pulsar");
    TVS tvs(50, 160000, 2, 6, "Liquid", "Alloys", 12, "Apache");

    // Printing information of Audi car
    std::cout << "Audi Car Information:" << std::endl;
    std::cout << "Model Type: " << audi.modelType << std::endl;
    std::cout << "Ownership Cost: " << audi.ownershipCost << std::endl;
    std::cout << "Warranty: " << audi.warranty << " years" << std::endl;
    std::cout << "Seating Capacity: " << audi.seatingCapacity << std::endl;
    std::cout << "Fuel Type: " << audi.fuelType << std::endl;
    std::cout << "Mileage: " << audi.mileage << std::endl;
    std::cout << "Price: " << audi.price << std::endl;

    // Printing information of Ford car
    std::cout << "\nFord Car Information:" << std::endl;
    std::cout << "Model Type: " << ford.modelType << std::endl;
    std::cout << "Ownership Cost: " << ford.ownershipCost << std::endl;
    std::cout << "Warranty: " << ford.warranty << " years" << std::endl;
    std::cout << "Seating Capacity: " << ford.seatingCapacity << std::endl;
    std::cout << "Fuel Type: " << ford.fuelType << std::endl;
    std::cout << "Mileage: " << ford.mileage << std::endl;
    std::cout << "Price: " << ford.price << std::endl;

    // Printing information of Bajaj bike
    std::cout << "\nBajaj Bike Information:" << std::endl;
    std::cout << "Make Type: " << bajaj.makeType << std::endl;
    std::cout << "Number of Cylinders: " << bajaj.numCylinders << std::endl;
    std::cout << "Number of Gears: " << bajaj.numGears << std::endl;
    std::cout << "Cooling Type: " << bajaj.coolingType << std::endl;
    std::cout << "Wheel Type: " << bajaj.wheelType << std::endl;
    std::cout << "Fuel Tank Size: " << bajaj.fuelTankSize << std::endl;
    std::cout << "Mileage: " << bajaj.mileage << std::endl;
    std::cout << "Price: " << bajaj.price << std::endl;

    // Printing information of TVS bike
    std::cout << "\nTVS Bike Information:" << std::endl;
    std::cout << "Make Type: " << tvs.makeType << std::endl;
    std::cout << "Number of Cylinders: " << tvs.numCylinders << std::endl;
    std::cout << "Number of Gears: " << tvs.numGears << std::endl;
    std::cout << "Cooling Type: " << tvs.coolingType << std::endl;
    std::cout << "Wheel Type: " << tvs.wheelType << std::endl;
    std::cout << "Fuel Tank Size: " << tvs.fuelTankSize << std::endl;
    std::cout << "Mileage: " << tvs.mileage << std::endl;
    std::cout << "Price: " << tvs.price << std::endl;

    return 0;
}

