#include<iostream>
using namespace std;
int main()
{
	cout<<"enter number:";
	int n;
	cin>>n;
	int temp,sum,rem;
	temp=n;
	sum=0;
	while(n>0)
	{
		rem=n%10;
		sum=sum+rem*rem*rem;
		n/=10;
	}
	if(sum==temp)
	{
		cout<<"its an armstrong number"<<endl;
	}
	else {
		cout<<"its not an armstrong number"<<endl;
	}
}
