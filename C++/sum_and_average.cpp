#include<iostream>
using namespace std;
int main()
{
   int i,j=9,sum=0;
   float avg,x;
   int array[]={1,2,3,4,5,6,7,8,9,10};
   for(i=0;i<=j;i++)
   {
      sum=sum+array[i];
   }
   cout<<"\n sum of 10 numbers:"<<sum;
   x=sizeof(array)/sizeof(array[i]);
   cout<<"\n length is:"<<x;
   avg=sum/x;
   cout<<"\n average is:"<<avg;

}
