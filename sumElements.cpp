#include<iostream>
using namespace std;
int main()
	{
		cout<<"enter the number of elements:";
		int n;
		cin>>n;
		cout<<"enter those elements:";
		int arr[n];int sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			sum=arr[i]+sum;
		}
		cout<<"the sum of elements in a given array is" << sum;
	}

