#include <string>
#include <iostream>      //librarys
using namespace std;

int main (){
float eka, toka ;
char operation;
while (1){

cout << "input first number: ";             //prompting the user
cin >> eka ;                          // saving the inputted number to A
cout << "input the second number: ";
cin >> toka ;
cout << "operation: +,-,*,/ : ";
cin >> operation;

switch (operation)
{
    case '+':
        cout<<"Sum is: "<<eka+toka<<endl;
        break;
    case '-':
        cout<<"Subtraction is: "<<eka-toka<<endl;
        break;
    case '*':
        cout <<"Multiplication is: "<<eka*toka<<endl;
        break;
    case '/':
        cout<<"Division is: "<<eka/toka<<endl;
        break;
    
}

}
}