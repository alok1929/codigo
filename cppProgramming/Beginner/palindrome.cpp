#include<iostream>
using namespace std;
int main()
{
	cout<<"enter the number " <<endl;
	int num;
	cin>>num;
	int temp,rem,sum=0;
	temp=num;
	while(num>=0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	if(sum==temp)
	{
		cout<<"number is palindrome number"<<endl;
	}
	else
	{
		cout<<"number is not palindrome number"<<endl;
	}
}

