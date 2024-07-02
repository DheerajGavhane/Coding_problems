//program to check even or odd outoff 2 numbers
#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<" Enter the value of n1: ";
    cin>>n1;
    cout<<" Enter the value of n2: ";
    cin>>n2;
    if(n1>0 && n2>0)
    {
        if(n1%2==0 && n2%2==0)
        {
            cout<<" Both numbers "<<n1<<", "<<n2<<" are even numbers";
        }
        else if(n1%2!=0 && n2%2!=0)
        {
            cout<<" Both numbers "<<n1<<", "<<n2<<" are odd numbers";
        }
        else if(n1%2==0 && n2%2!=0)
        {
            cout<<n1<<" is even number ,"<<n2<<" is odd number ";
        }
        else
        {
            cout<<n2<<" is even number ,"<<n1<<" is odd number ";
        }
    }
    else
    {
        cout<<"Error";
    }
}
