//program to calculate the factorial of a number

#include<iostream>
using namespace std;
int main()
{
    int i,n,fact;
    cout<<" enter the number: ";
    cin>>n;
    fact=n;
    if(n>0)
    {
      for(i=n-1;i>=1;i--)
      {   
        fact=fact*i;
      }
      cout<<" factorial of "<<n<<" is "<<fact;
    }
    else
    {
        cout<<"error";
    }  
}
