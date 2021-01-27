#include<iostream>
using namespace std;
int main()
{
    cout<<"enter the string:";
    string a;
    cin>>a;
    string b="";
    for(int i=a.length()-1;i>=0;i--)
    {
        b=b+a.at(i);
    }
    if(a==b)
    {
        cout<<"it is a palindrome";
    }
    else{
        cout<<"its not a palindrome";
    }

}