#include<iostream>
using namespace std;
int main()
{
    cout<<"enter the numbers to find the largest:";
    int a,b;
    cin>>a>>b;
    if(a>b)
    {
        cout<< a <<" is greater";
    }
    else if (a==b)
    {
        cout<<a << "  and " << b << " are equal"<<endl;
    }
    else{
        cout<< b << " is greater";
    }
}