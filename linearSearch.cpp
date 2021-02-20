//C++ program to linearly search an element in a given array

#include<iostream>
using namespace std;
int main()
	{
		cout<<"enter the number of elements:";
		int n;
		cin>>n;
		cout<<"enter those elements";
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		cout<<"enter the search element:";
		int search;
		cin>>search;int k=0;
		for(int i=0;i<n;i++)
		{
			if(arr[i]==search)
			{
			cout<<"element found at " << (i+1) << "position";
			k++;
			break;
			}
		}
		if(k==0)
		{
			cout<<"element not found";
		}
	}


