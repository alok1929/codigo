#include<iostream>
using namespace std;
int main()
{
    cout<<"enter the numbers to find quoitent and reminder";
    int a,b,q,r;
    cin>>a>>b;
    q=a%b;
    r=a/b;
    cout<<"the quoitent is " << q <<endl;
    cout<<"the reminder is " << r;
}