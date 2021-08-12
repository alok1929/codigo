/*
 Calculate average & percentage of an array in c++
*/

#include<iostream>
using namespace std;
int main()
{
	cout<<"enter the number of elements";
	int n;
	int sum=0;
	double average_array;
	double percentage_array;
	cin>>n;
	int arr[n];
	cout<<"enter those elements";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		sum=sum+arr[i];
	}
	average_array=sum/n;
	percentage_array=sum/100.0;
	cout<<"average of an array " << average_array;
	cout<<"percentage of an array " << percentage_array;
}

	
	

