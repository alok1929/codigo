//Count number of occurrences (or frequency) in a sorted array

#include<iostream>
using namespace std;
int main()
{
	cout<<"enter the number of elements";
	int k=0;
	int n;
	cin>>n;
	int arr[n];
	cout<<"enter those elements";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter the element freq to be searched:";
	int x;
	cin>>x;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==x)
		{
			k++;
		}
	}
	cout<<"the element x has been repeated " << k << "times"<< endl;
}

