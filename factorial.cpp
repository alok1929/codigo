#include<iostream>
using namespace std;
int main()
{
    cout<<"enter the number :";
    int num;
    cin>>num;
   int f=1;
    for(int i=1;i<=num;i++)
    {
     f=f*i;
    }
    cout<<f;
}
