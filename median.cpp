// C/C++ Program for Median of a sorted array(median means middle number):

#include<iostream>
using namespace std;
int main()
{
	cout<<"enter the number of elements";
	int n,temp,median,oddMedian;
	cin>>n;
	int arr[n];
	cout<<"enter those elements";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}
		}
	}
	if(n%2==0)
	{
		median=n/2;
		cout<<median;
		cout<<"median of this array is " << arr[median]<<endl;
	}
	else if(n%3==0)
	{
		int med=n+1;
		oddMedian=med/2;
		cout<<oddMedian;
		cout<<"median of this array is " << arr[oddMedian]<<endl;
	}
}



	
