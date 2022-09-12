// SUM OF n ARRAY VALUES

#include<iostream>
using namespace std;
int main() {
    int i;
    int n;
    int sum = 0;

    cout<<"Entre how many values you want on an array";
    cin>>n;

    int marks[n];
     
     //Initialize Array

     for(i=0; i<n; i++){
        cout<<"Entre value";
        cin >> marks[i];
     }

     // Output Array
     
     for(i=0; i<n; i++) {
        sum = sum + marks[i];
     }

     cout<<sum; 

     return 0;
}