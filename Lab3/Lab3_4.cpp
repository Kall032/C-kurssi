#include <iostream>
#include <string>
using namespace std;

// Base class: Vehicle
class Vehicle {
protected:
    string brand;
    int year;

public:
    Vehicle(string b, int y) : brand(b), year(y) {}

    virtual void showInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
    }

    virtual void startEngine() {
        cout << "Starting engine of Vehicle" << endl;
    }

    
};

// Derived class: Car
class Car : public Vehicle {
private:
    int numDoors;

public:
    Car(string b, int y, int doors) : Vehicle(b, y), numDoors(doors) {}

    void showInfo() override {
        Vehicle::showInfo();
        cout << "Number of doors: " << numDoors << endl;
    }

    void startEngine() override {
        cout << "Car engine is starting!" << endl;
    }
};

// Derived class: ElectricCar
class ElectricCar : public Car {
private:
    int batteryCapacity;

public:
    // Default constructor
    ElectricCar() : Car("Unknown", 0, 0), batteryCapacity(0) {}

    // Parameterized constructor
    ElectricCar(string b, int y, int doors, int battery) 
        : Car(b, y, doors), batteryCapacity(battery) {}

    void showInfo() override {
        Car::showInfo();
        cout << "Battery Capacity: " << batteryCapacity << " kWh" << endl;
    }

    void startEngine() override {
        cout << "Electric engine is starting... Silent but powerful!" << endl;
    }
};

int main() {
    // Create a Vehicle object
    Vehicle* vehicle = new Vehicle("Generic", 2015);
    vehicle->showInfo();
    vehicle->startEngine();
    delete vehicle;

    // Create a Car object
    Car* car = new Car("Toyota", 2021, 4);
    car->showInfo();
    car->startEngine();
    delete car;

    // Create ElectricCar objects
    ElectricCar* eCar1 = new ElectricCar();
    eCar1->showInfo();
    eCar1->startEngine();
    delete eCar1;

    ElectricCar* eCar2 = new ElectricCar("Tesla", 2023, 4, 75);
    eCar2->showInfo();
    eCar2->startEngine();
    delete eCar2;

    return 0;
}