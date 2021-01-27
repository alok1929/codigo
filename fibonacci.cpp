#include<iostream>
using namespace std;
int main()
{
    cout<<"enter the number of elements:";
    int n, f, f1=-1,f2=1;
    cin>>n;
    while(n>0)
    {
        f=f1+f2;
        f1=f2;
        f2=f;
        cout<<f<<endl;
        n--;
    }
}

//important program