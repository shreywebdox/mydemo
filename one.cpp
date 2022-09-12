#include<iostream>
using namespace std;
int main() {

    int a, b;
    int result;
    cout<<"Enter the value of a, b";
    cin>>a>>b;

    // cout<<"Value of a is "<<a<<" and value of b is "<<b<<" and value of c "<<c<<endl;

    result = a > b ? a : b;
    cout<<result<<endl;
    return 0;

}