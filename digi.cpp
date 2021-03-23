#include<iostream>
using namespace std;
int main()
{
    cout<<"enter the number";
    int n;
    cin>>n;
    if(n>9)
    {
        cout<<"its a two digit number";
    }
    else 
    {
        cout<<"its a single digit number";
    }
}