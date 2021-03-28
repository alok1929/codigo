//to find factorial of number 
#include<iostream>
using namespace std;
int main()
{
    cout<<"enter the number";//4
    int n,f=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        f*=i;
    }
    cout<<"factorial is " << f <<endl;
}
