#include <iostream>
using namespace std;
#define min_length 8
int main() {
   cout << "Enter a password: ";
   string password;
    cin >> password;
    // Check if the password is at least 8 characters long
    if (password.length() < min_length) {
        cout << "Password must be at least " << min_length << " characters long." << endl;
    } else {
        cout << "Password is valid." << endl;
    }
    // Check if the password contains at least one uppercase letter
    bool hasUppercase = false;
    for (char c : password) {
        if (isupper(c)) {
            hasUppercase = true;
            break;
        }
    }
    if (!hasUppercase) {
        cout << "Password must contain at least one uppercase letter." << endl;
    } else {
        cout << "Password contains an uppercase letter." << endl;
    }
    // Check if the password contains at least one digit
    bool hasDigit = false;
    for (char c : password) {
        if (isdigit(c)) {
            hasDigit = true;
            break;
        }
    }
    if (!hasDigit) {
        cout << "Password must contain at least one digit." << endl;
    } else {
        cout << "Password contains a digit." << endl;
    }
    // Check if the password contains at least one special character
    bool hasSpecialChar = false;
    string specialChars = "!@#$%^&*()_+[]{}|;:,.<>?";
    for (char c : password) {
        if (specialChars.find(c) != string::npos) {
            hasSpecialChar = true;
            break;
        }
    }
    if (!hasSpecialChar) {
        cout << "Password must contain at least one special character." << endl;
    } else {
        cout << "Password contains a special character." << endl;
    }
    // Check if the password contains at least one lowercase letter
    bool hasLowercase = false;
    for (char c : password) {
        if (islower(c)) {
            hasLowercase = true;
            break;
        }
    }
    if (!hasLowercase) {
        cout << "Password must contain at least one lowercase letter." << endl;
    } else {
        cout << "Password contains a lowercase letter." << endl;
    }   return 0; 
} 