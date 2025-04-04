#include <iostream>
using namespace std;

int main() {
    int number, sum = 0;
    cout << "Enter a number: ";
    cin >> number;

    // Use a for loop to calculate the sum of digits
    for (; number > 0; number /= 10) {
        sum += number % 10; // Add the last digit to the sum
    }

    cout << "The sum of the digits is: " << sum << endl; 
    return 0;
}