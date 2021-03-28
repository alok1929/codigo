#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"ENTER THE NUMBERS:";
    cin>>a>>b>>c;
    if(a>b&&a>>c)
    cout<<"LARGEST NUMBER="<<a<<endl;
    else
    if(b>a&&b>c)
    cout<<"LARGEST NUMBER="<<b<<endl;
    else
    cout<<"LARGEST NUMBER="<<c<<endl;
}