#include<iostream>
using namespace std;
int main() {
    int var=20;     //Actual variable declaration
    int *ip;        //Pointer variable
    ip = &var;      //store address of var in pointer variable 

    cout << "Value of var variable:";
    cout << var << endl;

    // Print the address stored in ip pointer variable
    cout << "Address stored in ip variable:";
    cout << ip << endl;
    
     // Access the value at the address available in pointer
     cout << "Value of *ip variable:";
     cout << *ip << endl;

     return 0;
}