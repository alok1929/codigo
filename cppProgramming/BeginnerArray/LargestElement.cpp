/*
 Find the largest element in an array
*/
#include<iostream>
using namespace std;
int main()
{
	cout<<"enter the number of elements";
	int n;
	cin>>n;
	int arr[n];
	cout<<"enter those elements:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int temp;
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
	cout<<"the largest element in the array is : " << arr[n-1];
}

