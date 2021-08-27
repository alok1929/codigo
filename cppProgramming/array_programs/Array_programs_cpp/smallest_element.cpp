//Find smallest element in array
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
    
    //finding smallest element 
    int small = arr[0];            //assume first element is smallest
    for(int i=0 ; i<n ; i++)
        if(arr[i]<small)
            small=arr[i];
    
    cout<<"\nSmallest element in array is : "<<small<<endl;
    return 0;
}