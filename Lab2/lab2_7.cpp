#include <iostream>
using namespace std;

int main() {
    int a = 100;       
    int& refA = a;     

    cout << "Before modifying refA: a = " << a << endl;

    refA = 30;         

    cout << "After modifying refA: a = " << a << endl;

    return 0;
}