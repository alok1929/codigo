//Reverse an array
#include <iostream>
using namespace std;
int main()
{
    int n, arr[50], rev_arr[50] ;
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
    
    //adding array elements in another array in reverse order 
    int small = arr[0];            
    for(int i=0 ; i<n ; i++)
            rev_arr[n-i-1]=arr[i];
    
     cout<<"\n\nReversed Array : "<<endl;
    for(int i=0 ; i<n ; i++)
        cout<<rev_arr[i]<<" ";
    return 0;
}
