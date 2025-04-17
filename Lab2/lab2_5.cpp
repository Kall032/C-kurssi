#include <string>
#include <iostream>    //librarys
using namespace std;
   
int main() {
    int size; 
    cout << "enter the size of the array: "<<endl;
    cin >> size;
   
    int array[size];   
    
    cout << "Enter " << size << " numbers:" << endl;
    
    for (int i = 0; i < size; i++) {
       
        cout << "Enter value for index " << i << ": ";
       
        cin >> array[i]; 
    }
   
    int *pointarray = array;
    
    int *revpointarray = array + size;
   
    cout<< "revarray: ";
   
    for (int o = 0; o < size; o++){
       
        revpointarray --;
       
        cout << *revpointarray;      
    } 

    cout <<endl<<"array: " ;
  
    for (int o = 0; o < size; o++){
       
        cout << *pointarray;
       
        pointarray++;
    }

}
