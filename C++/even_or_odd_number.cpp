//program to check if a number is even or odd

#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter your number:";
    cin>>num;
    if(num%2==0)
      {
        cout<<" Given number "<<num<<" is even number ";
      }
    else 
      {
        cout<<" Given number "<<num<<" is odd number ";
      }
}
