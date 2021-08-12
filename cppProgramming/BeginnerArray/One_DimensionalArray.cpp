/*
  Program to print one dimensional array in c++
*/

#include<iostream>
using namespace std;
int main()
{
	cout<<"enter the number of elements";
	int n;
	cin>>n;
	cout<<"enter those elements";
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"\n";
	}
}

