/*
 Program to search an element using linearSearch
*/
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
		cin>>arr[i];
	}
	cout<<"enter the search element";
	int searchElement;
	cin>>searchElement;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==searchElement)
		{
			cout<<"element at " << (i+1) << " position";
		}
	}
}

