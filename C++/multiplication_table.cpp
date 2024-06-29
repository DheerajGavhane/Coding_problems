//program to print the multiplication table of a number 

#include<iostream>
using namespace std;
int main()
{
    int i,j;
    cout<<"Enter number of which multiplication table you want: ";
    cin>>i;
    for(j=1;j<=10;j++)
    { 
       cout<<"\n"<<i<<" * "<< j<<" = "<<i*j;
    }
}
