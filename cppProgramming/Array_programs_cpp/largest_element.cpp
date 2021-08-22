//Find largest element in array
#include <iostream>
using namespace std;
int main()
{
    int n, arr[50] ;
    //user input for number of elements 
    cout<<"Enter size of the array : ";
    cin>>n;
    //user input for elements values
    cout<<"\nEnter elements of the array : \n";
    for(int i=0 ; i<n ; i++)
        cin>>arr[i];
    
    //printing the array
    cout<<"\n\nArray : "<<endl;
    for(int i=0 ; i<n ; i++)
        cout<<arr[i]<<" ";
    
    //finding largest element 
    int big = arr[0];            //assume first element is largest 
    for(int i=0 ; i<n ; i++)
        if(arr[i]>big)
            big=arr[i];
    
    cout<<"\nLargest element in array is : "<<big<<endl;
    return 0;
}