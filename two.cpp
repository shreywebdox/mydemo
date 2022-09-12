#include<iostream>
using namespace std;
int main() {

    int a, b ,c;
    int result;
    cout<<"Entre the value of a ,b ,c";
    cin>>a>>b>>c;

    cout<<"Value of a is "<<a<<" and value of b is "<<b<<" and value of c is "<<c<<endl;

    if (a > b && a > c) {
        result = a;
    }
    if (b > a && b > c) {
        result = b;
    }
    if (c > a && c > b) {
        result = c;
    }

    cout<<"Greater is " <<result<<endl;
    return 0;

}