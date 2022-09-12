// PRINT A TABLE OF ANY NUMBER

#include<iostream>
using namespace std;
int main() {
    int n,i;
    int Prod;

    cout << "Entre a number to find its table";
    cin >> n;
    
    for ( i=1; i <=10; i++ ){
        Prod = n*i;
    cout << n << "*" <<i<< "=" << Prod;
    }
    return 0;
}