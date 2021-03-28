//C++ Program to Check Whether a character is Vowel or Consonant.
#include<string>
#include<iostream>
using namespace std;
int main()
{
    cout<<"enter the string";//alok
    string str;
    int count =0;int k=0;
    cin>>str;//alok
    int len=str.length();//to find length of string 
    for(int i=0;i<len;i++)
    {
        char ch=str.at(i);//character position of a character at position i
        if(ch=='a' || ch=='e' ||ch=='i' || ch=='o' || ch=='u')
        {
            cout<<ch<< " is a vowel"<<endl;
    
        }
        else 
        {
            cout<<ch<<" is a consonant" <<endl;
            
        }
    }
  
    
}