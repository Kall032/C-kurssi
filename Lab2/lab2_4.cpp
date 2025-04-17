#include <iostream>
using namespace std;

int main() {
    int a;
   
   while (1) 
   { cout << "input negative number to break" << endl << "Input number: " ;
    cin >> a;
    if (a==0){cout << "Input number: " ;
        cin >> a;}
    if (a>0)
    {
     cout << "square of the numvber: " << a*a << endl;   
    continue;
    }else {
        return 0; 
    
    }
   }
}