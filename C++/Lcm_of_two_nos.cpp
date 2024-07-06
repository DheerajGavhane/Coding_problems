//program to find LCM of two number

#include<iostream>
using namespace std;

int main()
{
    int i,n1,n2,lcm;
    cout<<"Enter the number n1: ";
    cin>>n1;
    cout<<"Enter the number n2: ";
    cin>>n2;
    if(n1>0 && n2>0)
    {
        for(i=2;i<=n1;i++)
        {
            if(n1%i==0 && n2%i==0)
            {
                lcm=(n1*n2)/i;
            }
        }
        cout<<" LCM of "<<n1<<" and "<<n2<<" is: "<<lcm;
    }
    else
    {
        cout<<"Error";
    }
}
