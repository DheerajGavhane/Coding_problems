//program to find this star right angle triangle 

#include<iostream>
using namespace std;

int main()
{
    int i,j,k,row;
    cout<<"Enter number of rows: ";
    cin>>row;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=row-i;j++)
        {
            cout<<" ";
        }
        for(k=1;k<=i;k++)
        {
            cout<<"*";
        } 
        cout<<"\n";   
    }
}
