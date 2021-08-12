/*
 Grade of a student taking its marks as an array in c++
step 1: get marks of student and store it in an array
step 2: find the percentage of the student
step 3: if percentage above 90 - A+
	- percentage between 80 to 90 - A
	- percentage between 75 to 80 - B+ 
	- percentage between 70 to 75 - B
	- percentage between 65 to 70 - C+
	- percentage below 65 - dosen't matter, fail only

*/
#include<iostream>
using namespace std;
int main()
{
	cout<<"enter the number of subjects:";
	int n,totalmarks=0;double avr=0.0;
	cin>>n;
	double percentage=0.0;
	int arr[n];
	cout<<"enter those marks";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		totalmarks=totalmarks+arr[i];
	}
	avr=totalmarks/n;
	percentage=totalmarks*100;
	if(percentage>90.0)
	{
		cout<<"Grade is A+";
	}
	else if (percentage<=90.0 && percentage>85.0)
	{
		cout<<"Grade is A";
	}
	else if (percentage<=85.0 && percentage>80.0)
	{
		cout<<"Grade is B+";
	}
	else if(percentage<=80.0 && percentage>75.0)
	{
		cout<<"Grade is B";
	}
	else if (percentage<=75.0 && percentage>70.0)
	{
		cout<<"Grade is C";
	}
	else if(percentage<=70.0 && percentage>65.0)
	{
		cout<<"FAIL,WORK HARDER";
	}
}



