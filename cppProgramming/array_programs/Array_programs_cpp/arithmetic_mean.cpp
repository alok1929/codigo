//Calculate arithmetic mean
#include <iostream>
using namespace std;
int main()
{
    int n,arr[20];
    float sum=0, mean;
    //user input for number of elements 
    cout<<"Enter number of observations : ";
    cin>>n;
    //user input for elements values
    cout<<"\nEnter the observation values : \n";
    for(int i=0 ; i<n ; i++)
        cin>>arr[i];
    
    //printing the array and calculating 
    cout<<"\n\nARRAY : "<<endl;
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
        sum+=arr[i];
    }   
    mean=sum/n;
    cout<<"\n\nArithmetic Mean : "<<mean<<endl;
    return 0;
}