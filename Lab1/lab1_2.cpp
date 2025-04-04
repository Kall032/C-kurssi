#include <iostream>   //librarys
#include <string>
using namespace std;

namespace uppercase{        //finding uppercases
     string uppercase(string str) {
         for (string::size_type i = 0; i < str.length(); i++) {
             str[i] = toupper(str[i]);
         }
         return str;
     }   
}
namespace vowels {         //finding viwels
    int countVowels(string str) {
        string vowels = "aeiou";
        int count = 0; 
        for (string::size_type i = 0; i < str.length(); i++) {
            if (vowels.find(tolower(str[i])) != string::npos) { 
                count++; 
            }
        }
        return count; 
    }
}

namespace reverse { //reversing the inputted word
    string reverse(string str) {
        string reversed = "";
        for (string::size_type i = str.length(); i > 0; i--) {
            reversed += str[i - 1];
        }
        return reversed;
    }
}

int main() {    
    string str;         //prompting the user for imput
    cout << "Enter a string: ";
    cin >> str;
    cout << "Uppercase: " << uppercase::uppercase(str) << endl;
    cout << "Number of vowels: " << vowels::countVowels(str) << endl;
    cout << "Reversed: " << reverse::reverse(str) << endl;
    return 0;
}
// Output