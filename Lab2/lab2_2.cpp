#include <iostream>      //librarys
using namespace std;

// Swap without pointers or references
void swapWithoutPointersOrReferences(float a, float b) {
    float temp = a;
    a = b;
    b = temp;
    
}

// Swap using pointers
void swapUsingPointers(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

// Swap using references
void swapUsingReferences(float &a, float &b) {
    float temp = a;
    a = b;
    b = temp;
}

int main() {
    float a, b ;
    cout << "Enter two numbers: ";  
    cin >> a >> b;           //prompting the user for input
    cout << "Original values: a = " <<a << ", b = " << b <<endl;
    swapWithoutPointersOrReferences(a, b); 
    cout <<"Swap without a = " << a <<", b = "<< b<<endl;
    swapUsingPointers(&a, &b);
    cout<< "using pointers a = " << a << ", b = " << b <<endl;
    swapUsingReferences(a, b);
    cout<<"Using references a = " << a << ", b = " <<b <<endl;
                                                    // outputs
    return 0;
}