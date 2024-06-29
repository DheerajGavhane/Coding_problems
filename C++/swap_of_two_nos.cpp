//program to swap two numbers with using a temporary variable

#include<iostream>
using namespace std;

int main()
{
    float a,b,temp;
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;
    temp=a;
    a=b;
    b=temp;
    //after swapping values of a,b,
    cout<<"value of a after swap: "<<a<<"\nvalue of b after swap: "<<b;
}
