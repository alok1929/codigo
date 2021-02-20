#include<iostream>
using namespace std;
int main()
	{
		cout<<"enter the number of elements:";
		int n;
		int k;
		cin>>n;
		int arr[n];
		cout<<"enter those elements:";
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		for(int i=0;i<n;i++)
		{
			k=0;
		for(int j=0;j<n;j++)
		{
			if(arr[i]==arr[j])
		{
			k++;
		}
		}
		if(k%3==0)
		{
			cout<<arr[i];
			break;
		}
		}
		if(k==0)
		{
			cout<<"kuch tho gadbad hai abhijeet";
		}
	}



