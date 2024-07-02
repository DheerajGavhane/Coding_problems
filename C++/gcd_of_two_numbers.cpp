//program to find the gcd of two numbers

#include<iostream>
using namespace std;
int main()
{
int n1,n2,i;
  cout<<" Enter 1st number: ";
  cin>>n1;
  cout<<" Enter 2nd number: ";
  cin>>n2;
  if(n1>0 && n2>0)
  {   for(i=n1;i>=1;i--)
     {
         if(n1%i==0 && n2%i==0)
         {
             cout<<" Gcd of two numbers "<<n1<<" & "<<n2<<" : "<<i;
             break;
         }
     }
  }
  else
  {
     cout<<" Enter valid numbers ";
  }
}
