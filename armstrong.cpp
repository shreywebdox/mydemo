// ARMSTRONG NUMBER - 371 = 7x7x7 + 3x3x3 + 1x1x1

#include<iostream>
using namespace std;
int main() {
    int n=371;
    int temp=n;
    int rem=0;
    int d=0;
    
    while (n>0) {
        rem = n % 10;
        d = d + (rem * rem * rem);
         n = n/10;        
    }
    if (temp == d) {
        cout << "armstrong number";
    }
    else { cout << "not armstrong number"; }
    
    return 0;

}

