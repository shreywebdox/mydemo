// ARRAY EXAMPLE-3

#include<iostream>
using namespace std;
int main() {
    int i;
    int n;
     
    cout<<"Entre how many values you want on an array";
    cin>>n;
    
    int marks[n];
     
     // Initialise Array
     
     for(i=0; i<n; i++) {
        cout<<"Entre Value";
        cin>>marks[i];
     }

     // Output Array

     for(i=0; i<n; i++) {
        cout<<marks[i]<<endl;
     }
     
     return 0;
}