//it converts farenheit to celsius using the formula (32f-32) * 5/9 = c

#include<iostream>
using namespace std;
int main()
{
    cout<<"enter the value to convert to celsius";
    double f;
    cin>>f;
    double cel=(32*f-32) * 5/9 ;
    cout<<cel;
}