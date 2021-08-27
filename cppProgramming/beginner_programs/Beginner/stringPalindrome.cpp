#include<iostream>
#include<string>
using namespace std;
int main()
{
	cout<<"enter the string:";
	string a,b;char ch;
	cin>>a;
	int n=a.length();
	for(int i=n-1;i>=0;i--)
	{
		ch=a.at(i);
		b=b+ch;
	}
	if(a==b)
	{
		cout<<"the string is palindrome"<<endl;
	}
	else
	{
		cout<<"the string is not palindrome"<<endl;
	}
}

	
