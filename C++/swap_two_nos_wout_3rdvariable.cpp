//program to swap two numbers without using third variable

#include<iostream>
using namespace std;
int main()
{
    float a,b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"\nvalue of a after swap: "<<a;
    cout<<"\nvalue of b after swap: "<<b;
}
