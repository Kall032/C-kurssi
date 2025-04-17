#include <string>
#include <iostream>      //librarys
#include <cmath>
using namespace std;
int mult(int ekaluku  , int tokaluku){              //multiplication for whole numbers

    return ekaluku * tokaluku;
}
double mult(double ekaluku, double tokaluku) {      //mult for double
    return ekaluku * tokaluku;
}

double mult(int ekaluku, double tokaluku, bool flag) {      //function to round to nearest if flag is 1
    double result = ekaluku * tokaluku;
    if (flag){
        return (result)? ceil(result) : floor(result);
    }
    return result;
}

int main (){
    int A;
    int B;
    double DA;                  
    double DB;
    bool flag;
    cout << "input first number: ";             //prompting the user
    cin >> A ;                          // saving the inputted number to A
     cout << "input first doublenumber: ";
    cin >> DA ;
 
    cout << "input the second number: ";
    cin >> B ;
    cout << "input second doublenumber: ";              
    cin >> DB ;
    cout << "set flag: ";
    cin >> flag;
    cout << "Multiplication is :"<< mult(A, B)<<endl;
    cout << "Mult with double is : " << mult(DA, DB)<<endl;
    cout << "Mult with flag: " << mult(A,DA,flag);                  //outputting the results


}