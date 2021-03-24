#include<string>//u have a nice moustache harshith.B
#include<iostream>
using namespace std;
int main()
{
    cout<<"enter the string";
    string name;
    cin>>name;
    int len=name.length();
    for(int i=0;i<len;i++)
    {
        char ch=name.at(i);
        if(ch=='a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        {
            cout<<ch<< " is  a vowel"<<endl;
        }
        else 
        {
            cout<<ch<< " is  a consonant"<<endl;
        }
    }

}
