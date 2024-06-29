//program to find largest number out of given 3 numbers 
#include<iostream>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>b;
    cout<<"Enter the value of c:";
    cin>>c;
if(a>b && a>c)
      cout<<"a is the greatest";
    else if(b>c && b>a)
      cout<<"b is the greatest";
    else
      cout<<"c is the greatest";
} 
