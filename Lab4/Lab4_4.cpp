#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string model;
    int year;
    double price;

public:
    // Default constructor
    Car() : model("Unknown"), year(0), price(0.0) {
        cout << "Car Constructor called for " << model << endl;
    }

    // Parameterized constructor
    Car(string m, int y, double p) : model(m), year(y), price(p) {
        cout << "Car Constructor called for " << model << endl;
    }

    // Destructor
    ~Car() {
        cout << "Car Destructor called for " << model << endl;
    }

    // Function to input car data from user
    void input() {
        cout << "Enter car model: ";
        cin.ignore();  // To discard the leftover newline from previous input
        getline(cin, model);

        cout << "Enter car year: ";
        cin >> year;

        cout << "Enter car price: ";
        cin >> price;
    }

    // Function to display car details
    void display() const {
        cout << "Model: " << model << ", Year: " << year << ", Price: $" << price << endl;
    }
};

class CarCollection {
private:
    Car* cars; // Pointer to dynamically allocated array of cars
    int size;  // Number of cars in the collection

public:
    // Constructor to create and initialize the array of cars
    CarCollection(int n) : size(n) {
        cars = new Car[size];  // Dynamically allocate memory for 'n' cars
        cout << "Car collection initialized with " << size << " cars." << endl;

        for (int i = 0; i < size; ++i) {
            cout << "\nEnter details for car " << (i + 1) << ":" << endl;
            cars[i].input();
        }
    }

    // Destructor to clean up the dynamically allocated array
    ~CarCollection() {
        delete[] cars;
        cout << "Car collection destroyed." << endl;
    }

    // Method to display all car details
    void displayCars() const {
        for (int i = 0; i < size; ++i) {
            cout << "\nCar " << (i + 1) << " details:" << endl;
            cars[i].display();
        }
    }
};

int main() {
    string model;
    int year;
    double price;

    // Input car model
    cout << "Enter car model: ";
    cin >> model;  // This will leave a newline character in the input buffer

    // Attempt to read year with getline
    cout << "Enter car year: ";
    getline(cin, model);  // This will immediately read the leftover newline character

    cout << "Car model: " << model << endl;

    return 0;
}
