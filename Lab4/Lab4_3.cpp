#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string model;
    int year;
    double price;

public:
    // Constructor with default values
    Car(string m = "Unknown", int y = 0, double p = 0.0) 
        : model(m), year(y), price(p) {
        cout << "Car Created: " << model << " (" << year << ") - $" << price << endl;
    }

    // Destructor
    ~Car() {
        cout << "Car Destroyed: " << model << endl;
    }

    // Input function
    void input() {
        cout << "Enter model: ";
        cin >> ws;
        getline(cin, model);
        cout << "Enter year: ";
        cin >> year;
        cout << "Enter price: ";
        cin >> price;
    }

    // Display function
    void display() const {
        cout << "Model: " << model << ", Year: " << year << ", Price: $" << price << endl;
    }
};

class CarCollection {
private:
    Car* cars;
    int size;

public:
    // Constructor
    CarCollection() {
        cout << "How many cars do you want to enter? ";
        cin >> size;
        cars = new Car[size]; 

        for (int i = 0; i < size; ++i) {
            cout << "\n--- Car " << i + 1 << " ---\n";
            cars[i].input(); 
        }
    }

    // Destructor
    ~CarCollection() {
        delete[] cars; 
        cout << "\nCarCollection destroyed.\n";
    }

    
    void displayCars() const {
        cout << "\n=== Car Collection ===\n";
        for (int i = 0; i < size; ++i) {
            cars[i].display();
        }
    }
};

int main() {
    {
        CarCollection myCollection; 
        myCollection.displayCars(); // Display all cars
    } 

    return 0;
}
