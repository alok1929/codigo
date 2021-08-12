/* 
 Reverse an array in c++
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
	 cout<<"the reverse of the array is : "<<endl ;
	for(int i=n-1;i>=0;i--)
	{
		cout<<arr[i] <<"\n";
	}
}
