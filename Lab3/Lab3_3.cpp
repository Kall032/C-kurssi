#include <iostream>
#include <string>
using namespace std;

class Car               {                   //class
private:
    string brand;
    int year;

public:
    // Constructor
    Car(string b, int y) : brand(b), year(y) {
        cout << "Car " << brand << " From " << year << " created" << endl;
    }

    // D    estructor
   ~Car() {
        cout << "Car " << brand << " destroyed" << endl;
    }
    void showInfo() {
        cout << "car Brand: "  << brand << endl;
        cout << "manufacturing Year:  " << year << endl;
    }
};
int main() {
    Car* car1 = new Car("toyota", 2020);
    car1->showInfo();
    delete car1;   //deleting
    return 0;
}
