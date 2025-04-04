#include <iostream>
using namespace std;

int main() {
    int number, reversed = 0;
    cout << "Enter a number: ";
    cin >> number;

    // Use a for loop to reverse the digits of the number
    for (; number > 0; number /= 10) {
        int lastDigit = number % 10; 
        reversed = reversed * 10 + lastDigit; 
    }

    cout << "The reversed number is: " << reversed << endl;
    return 0;
}