#include<iostream>
using namespace std; 
int main()
{
	cout<<"enter the number"<<endl;
	int num;
	cin>>num;
	int rem,temp,sum=0;
	temp=num;
	while(num>0)
	{
		rem=num%10;
		sum=sum+rem*rem*rem;
		num=num/10;
	}
	if(sum==temp)
	{
		cout<<"armstrong number"<<endl;
	}
	else
	{
		cout<<"not an armstrong number" <<endl;
	}

}


