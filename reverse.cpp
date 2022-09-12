// PRINT NUMBER IN A REVERSE ORDER 

#include<iostream>
using namespace std;
int main() {
    int n, i;
    int fact=1;

    cout << "Entre a number";
    cin >> n;

    for ( i=n; i>=1; i-- ) {
        cout << i<<"\t";
    }
    return 0;  
}