// PRINT SUM OF N NUMBERS

#include<iostream>
using namespace std;
int main() {
    int i, n;
    int sum=0;

    cout << "Entre number";
    cin >> n;

    for (i=1; i<=n; i++) {
        sum = sum + i;
    }

    cout << "Sum is" << sum;
    return 0;
} 