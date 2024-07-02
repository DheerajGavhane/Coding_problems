//write a program to find whether triangle is right angle triangle or not

#include<iostream>
using namespace std;
int main()
{
   float s1,s2,s3,a,b;
   cout<<" Enter length of side s1: ";
   cin>>s1;
   cout<<" Enter length of side s2: ";
   cin>>s2;
   cout<<" Enter length of side s3: ";
   cin>>s3;
   if(s1>0 && s2>0 && s3>0)
   {
      if(s1>s2 && s1>s3)
      {
         a=s1*s1;
         b=(s2*s2)+(s3*s3);
         if(a==b)
         {
            cout<<" Triangle having sides "<<s1<<" "<<s2<<" "<<s3<<" is right angle traingle ";
         }
         else
         {
          cout<<" Triangle is not right angle traingle ";
         }
      }
      else if(s2>s1 && s2>s3)
      {
         a=s2*s2;
         b=(s1*s1)+(s3*s3);
         if(a==b)
         {
            cout<<" Triangle having sides "<<s1<<" "<<s2<<" "<<s3<<" is right angle traingle "; 
         }
         else
         {
          cout<<" Triangle is not right angle traingle ";
         }
      }
      else if(s3>s1 && s3>s2)
      {
         a=s3*s3;
         b=(s1*s1)+(s2*s2);
         if(a==b)
         {
            cout<<" Triangle having sides "<<s1<<" "<<s2<<" "<<s3<<" is right angle traingle "; 
         }
         else
         {
          cout<<" Triangle is not right angle traingle ";
         }
      }
      else
      {
          cout<<" Triangle is not right angle traingle ";
      }
   }
   else
   {
      cout<<"Error";
   }

}   
