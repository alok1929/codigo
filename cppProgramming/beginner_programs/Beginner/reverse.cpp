//C++ Program to Multiply two Numbers
#include<iostream>
using namespace std;
int main()
{
	cout<<"enter the number"<<endl;
	int num;
	cin>>num;
	int rem,sum=0;
	while(num>0)
	{		rem=num%10;
			sum=sum*10+rem;
			num=num/10;
	}
		cout<<"REVERSE OF THE NUMBER : "<<sum<<endl;
}

