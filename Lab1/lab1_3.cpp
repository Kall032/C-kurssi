#include <iostream>
using namespace std;

#define max 50 // Define a macro 

int main() {
    for (unsigned short i = 2; i <= max; i += 2) { // Using unsigned short for small positive numbers
        cout << i << " ";
    }
    return 0;
}