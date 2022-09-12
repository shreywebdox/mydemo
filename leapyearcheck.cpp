#include<iostream>
using namespace std;
int main() {
    int year;

    cout << "Entre a year";
    cin >>year;

    if ((year % 400==0) && (year % 100==0)) {
        cout << "leap year(century year)";
    }

    else if ((year % 4==0) && (year % 100!=0)) {
        cout << "leap year";
    }
    else {
        cout << "Not a leap year";
    }
    return 0;
}
