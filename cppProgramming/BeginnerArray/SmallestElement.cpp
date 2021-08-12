/*
 Smallest Element in an array in c++
 */

#include<iostream>
using namespace std;
int main()
{
	cout<<"enter the number of elements";
	int n;int temp;
	cin>>n;
	cout<<"enter those elements:";
	int arr[n];
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
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"Smallest Element in the array is " << arr[0];
}

