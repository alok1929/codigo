//Print one dimensional array
#include <iostream>
using namespace std;
int main()
{
    int n, arr[20];
    //user input for number of elements 
    cout<<"Enter size of the array : ";
    cin>>n;
    //user input for elements values
    cout<<"\nEnter elements of the array : \n";
    for(int i=0 ; i<n ; i++)
        cin>>arr[i];
    
    //printing the array
    cout<<"\n\nARRAY : "<<endl;
    for(int i=0 ; i<n ; i++)
        cout<<arr[i]<<" ";
    
    return 0;
}