// FACTORIAL OF A NUMBER

#include<iostream>
using namespace std;
int main() {
    int n,i;
    int fact=1;

    cout << "Entre a number";
    cin >> n;

    for ( i=n; i>=1; i-- ) {
        fact = fact * i;
        // cout<<fact<<endl;
    }

    cout << "Factorial of a number is" <<fact;
    return 0;
}