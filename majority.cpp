//C/C++ Program for Check for Majority Element in a sorted array
//this program is wrong, will do it later bro

#include<iostream>
using namespace std;
int main()
{
	cout<<"enter the number of elements";
	int n;
	cin>>n;
	int arr[n];
	cout<<"enter those elements";
	for(int i=0;i<n;i++)
	{
		cin>>arr[n];
	}
	int cunt=0;
	cout<<"enter the element to find if it is a majority";
	int maj;
	cin>>maj;
	for(int i=0;i<n;i++)
	{
	 	cunt=0;
	for(int j=0;j<n;j++)
	{
		if(arr[i]==arr[j])
		{
			cunt++;
		}
	}
	}
	int half=n/2;
	if(cunt>=half)
	{
		cout<<"true , the element appears more than n/2 times";
	}
}





