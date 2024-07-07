//program which accepts the user's first and last name and print them in reverse order with a space between them.

#include<iostream>
using namespace std;

int main()
{
    string f_name,l_name;
    int s1,s2,i,j;
    cout<<"Enter your first name: ";
    cin>>f_name;
    cout<<"Enter your last name: ";
    cin>>l_name;
    s1=f_name.size();
    s2=l_name.size();
    cout<<" s1 length "<<s1<<" s2 length "<<s2;
    cout<<"\n";
    for(i=s2-1;i>=0;i--)
    {
        cout<<l_name[i]<<" ";
    }
    for(j=s1-1;j>=0;j--)
    {
        cout<<f_name[j]<<" ";
    }
}
