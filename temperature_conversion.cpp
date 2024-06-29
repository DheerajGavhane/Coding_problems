/*program to convert temperature from farenheit to celsius,
 celsius to fahrenheit, celsius to kelvin, kelvin to celsius*/

#include<iostream>
using namespace std;
int main()
{
    int choice;
    float temp;
    cout<<"1-Fahrenheit to Celsius";
    cout<<"\n2-Celsius to Fahrenheit";
    cout<<"\n3-celsius to Kelvin";
    cout<<"\n4-kelvin to celcius";
    cout<<"\nEnter your choice: ";
    cin>>choice;
    cout<<"\nEnter your temperature: ";
    cin>>temp;
    switch(choice)
    {
     case 1:
     cout<<" Temperature in fahrenhit: "<<temp<<", Temperature in celsius: "<<(temp-32)*5/9;
     break;
     case 2:
     cout<<" Temperature in celcius: "<<temp<<", Temperature in fahrenheit: "<<(temp*9/5)+32;
     break;
     case 3:
     cout<<" Temperature in celsius: "<<temp<<", Temperature in kelvin: "<<temp+273.15;
     break;
     case 4:
     cout<<" Temperature in kelvin: "<<temp<<", Temperature in celsius: "<<temp-273.15;
     break;
    }
}
