//program to display the operation of pre and post increment and decrement

#include<iostream>
using namespace std;
int main()
{
    int n,num;
    cout<<"Enter the number: ";
    cin>>n;

    num=++n;
    cout<<"\nBefore pre-increment: "<<num<<", after pre-increment: "<<n;
    num=n++;
    cout<<"\nBefore post-increment: "<<num<<", after post-increment: "<<n;
    num=--n;
    cout<<"\nBefore pre-decrement: "<<num<<", after pre-decrement: "<<n;
    num=n--;
    cout<<"\nBefore post-decrement: "<<num<<", after post-decrement: "<<n;
}
