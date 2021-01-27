#include<iostream>
using namespace std;
int  main()
{
    cout<<"enter the string";
    string str;
    cin>>str;
    int k=0;
    for(int i=0;i<str.length();i++)
    {
        char ch=str.at(i);
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        {
            
            k++;
        }
        
    }
    cout<<"number of vowels in the string are " << k;
    }