// LINEAR SEARCH

#include<iostream>
using namespace std;
int main() {
    int arr[] = {9, 8, 7, 6, 5};
    int item, i, LOC= -1;
    
    cout << "Entre item to find on array";
    cin >> item;

    for (i=0; i<5; i++) {
        if (item == arr[i]) {
            LOC = i; 
            break;
        }
    }
    if (LOC !=-1) {
        cout << "Item found at position" << LOC; }

        else {cout << "Item not found"; }
    
    return 0;
}