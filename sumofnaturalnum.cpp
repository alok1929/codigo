//sum of natural numbers.
#include<iostream>
using namespace std;

int main()
{
    int a,n,sum=0;
    cout<<"ENTER THE NUMBER:";
    cin>>n;
    for(a=1;a<=n;++a)
    sum +=a;
    cout<<"SUM="<<sum<<endl;
}
