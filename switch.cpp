#include<iostream>
using namespace std;
int main()
{
    cout<<"enter the two numbers, then choose the case,it can be * ";
    int a ,b,c;
    char object;
    cin>>a;
    cin>>b;
    cout<<"enter the thingy now ";
    cin>>object;
    switch (object)
    {
    case  '*':
        c=a * b;
        cout<<c;
        break;
    case '/':

    c=a /b;
    cout<<c;
    break;

    

    
    
    }
}