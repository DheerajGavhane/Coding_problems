//program to check whether input alphabet/character is vowel or consonant

#include<iostream>
using namespace std;

int main()
{
    int i;
    char alpha;
    cout<<"Enter alphabet :";
    cin>>alpha;
    if(alpha=='a'|| alpha=='e' || alpha=='i' || alpha=='o' || alpha=='u')
    {
       cout<<alpha<<" is vowel ";
    }
    else if(alpha=='A'|| alpha=='E' || alpha=='I' || alpha=='O' || alpha=='U')
    {
       cout<<alpha<<" is vowel ";
    }
    else
    {
      cout<<alpha<<" is consonant ";
    }
}
