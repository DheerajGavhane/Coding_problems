//program to check whether given n numbers are prime numbers or not
#include<iostream>
using namespace std;

int main()
{
    int i,n;
    cout<<"enter the value of n: ";
    cin>>n;
    if(n<=1)
    {
        cout<<"error";
    }
    else
    {
     for(i=2;i<=n;i++)
     {   
        if(i==2 or i==3 or i==5 or i==7)
        { 
            cout<<"\n"<<i<<":is prime number";     
        } 
        else if(i%2!=0 and i%3!=0 and i%5!=0 and i%7!=0)
        {
            cout<<"\n"<<i<<":is prime number";
        }
        else
        {
            cout<<"\n"<<i<<":is not prime";
        }
     }     
    }
          
}
