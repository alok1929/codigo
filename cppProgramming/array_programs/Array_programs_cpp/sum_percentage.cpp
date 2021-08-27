//Calculate average & percentage
#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    float sum=0, avg, percentage;
    
    //user input for elements values
    cout<<"\nEnter marks for 5 subjects (x/100) : \n";
    for(int i=0 ; i<5 ; i++)
        cin>>arr[i];
    
    //printing the array
    cout<<"\n\nARRAY : "<<endl;
    for(int i=0 ; i<5 ; i++)
    {
        cout<<arr[i]<<" ";
        sum+=arr[i];
    }    
    
    //calculating average and percentage 
    avg=sum/5;
    percentage = (sum/500)*100;

    cout<<"\n\nAverage : "<<avg<<endl;
    cout<<"\nPercentage : "<<percentage<<"%"<<endl;

    return 0;
}