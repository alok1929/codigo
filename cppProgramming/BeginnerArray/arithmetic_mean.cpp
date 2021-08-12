/*
 arithmetic mean of an array in c++ given that number of people=45
 */
#include<iostream>
using namespace std;
int main()
{
	cout<<"enter the number of elements";
	int n;double sum=0.0,mean_ofarray=0.0;
	cin>>n;
	cout<<"enter those elements";
	int  arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter the frequency of those elements";
	int freq[n];
	for(int j=0;j<n;j++)
	{
		cin>>freq[j];
	}
	for(int i=0;i<n;i++)
	{
		 sum=sum+arr[i]*freq[i];
	}
	 mean_ofarray=sum/45;
	cout<<"the arithmetic mean of an array is " << mean_ofarray;
}

