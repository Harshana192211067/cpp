#include <iostream>

// Base class Mammals
class Mammals {
public:
    void display() {
        std::cout << "I am a mammal" << std::endl;
    }
};

// Base class MarineAnimals
class MarineAnimals {
public:
    void display() {
        std::cout << "I am a marine animal" << std::endl;
    }
};

// Derived class BlueWhale inheriting from Mammals and MarineAnimals
class BlueWhale : public Mammals, public MarineAnimals {
public:
    void display() {
        std::cout << "I belong to both the categories: Mammals as well as Marine Animals" << std::endl;
    }
};

int main() {
    Mammals mammalObj;
    MarineAnimals marineAnimalObj;
    BlueWhale blueWhaleObj;

    // Calling function of Mammals by object of Mammals
    mammalObj.display();

    // Calling function of MarineAnimals by object of MarineAnimals
    marineAnimalObj.display();

    // Calling function of BlueWhale by object of BlueWhale
    blueWhaleObj.display();

    // Calling function of each of its parent by object of BlueWhale
    blueWhaleObj.Mammals::display();
    blueWhaleObj.MarineAnimals::display();

}

