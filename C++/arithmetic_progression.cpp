//program to print A.P given as 1 3 5 7 9 11 13 16 19 21

#include<iostream>
using namespace std;
int main()
{
    int i,n,d;
    cout<<"Enter the value: ";
    cin>>n;
    cout<<"Enter common difference: ";
    cin>>d;
    cout<<"A.P:";
    for(i=1;i<=n;i=i+d)
    {
        cout<<i<<" ";
    }
}
