//C++ Program to Find GCD
#include<iostream>
using namespace std;
int main()
{
	cout<<"enter two numbers:"<<endl;
	cin>>n1>>n2;
	while(n1!=n2)
	{
		if(n1>n2)
			n1=n1-n2;
		else
			n2=n2-n1;
	}
	cout<<"gcd is " <<n1;
}
