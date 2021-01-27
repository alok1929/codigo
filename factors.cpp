#include<iostream>
using namespace std;
int main()
{
    cout<<"enter the number";
    int num;
    cin>>num;
    for(int i=1;i<=num*10;i++)
    {
        if(i%num==0)
        {
            cout<<i<<endl;
        }
        
    }
}