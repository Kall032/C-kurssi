#include <string>
#include <iostream>
using namespace std;

// math operations
// define a namespace called MathOperations
namespace MathOperations {
    int add(int a, int b) {
        return a + b;
    }
}

// define a namespace called TextOperations
namespace TextOperations {
    string yhdist(string str1, string str2) {
        return str1 + str2;
    }
}

int main() {
    // Use the add function from MathOperations
    cout << "Enter two numbers: \n";
    int a, b;   
    cin >> a >> b;
    cout << "Sum: " << MathOperations::add(a, b) << endl;
    

    // Use the yhdist function from TextOperations
    cout << "Enter two strings: \n";
    string str1, str2;
    cin >> str1 >> str2;
    string combined = TextOperations::yhdist(str1, str2);
    cout << "Concatenated String: " << combined << endl;

    return 0;   
}