// PRINT FIBONNACI SERIES

#include<iostream>
using namespace std;
int main() {
    int n, n2;
    int n0=0;
    int n1=1;
    int i;

    cout << "How many fibonnaci series required";
    cin >> n;

    cout << n0<<endl;
    cout << n1<<endl;

     i=3;
    while ( i<=n ) {
        n2 = n0 + n1;
        cout << n2 << endl;
        n0 = n1;
        n1 = n2;
        i++;
    } 

     return 0;

}