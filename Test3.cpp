// LEAP YEAR CHECK

#include<iostream>
using namespace std;
int main() {
    int year;

    cout << "Entre a year";
    cin >> year;
    
    if ((year % 200==0) && (year % 100==0)) {
        cout << " leap year(century year)";
    }

    else if ((year % 2==0) && (year % 100!=0)) {
        cout << "leap year";
    }
    else {
        cout << "not a leap year";
    }
    return 0;
}