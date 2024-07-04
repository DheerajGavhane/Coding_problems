//program to find the number to its power
#include<iostream>
using namespace std;

int main()
{
    int i,num,power,n;

    cout<<"Enter the number : ";
    cin>>n;
    cout<<"Enter the power: ";
    cin>>power;
    num=n;

    for(i=1;i<power;i++)
    {
        num=n*num;
    }
    cout<<" result: "<<num;
}
