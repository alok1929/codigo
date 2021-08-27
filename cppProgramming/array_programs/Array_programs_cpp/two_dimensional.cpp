//Print two dimensional array
#include <iostream>
using namespace std;
int main()
{
    int row,col, arr[20][20];
    //user input for number of elements 
    cout<<"Enter row and column of the array : ";
    cin>>row>>col;
    //user input for elements values
    cout<<"\nEnter elements of the array : \n";
    for(int i=0 ; i<row ; i++)
       for(int j=0 ; j<col ; j++)
            cin>>arr[i][j];
    
    //printing the array
    cout<<"\n\nARRAY : "<<endl;
    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<col ; j++)
            cout<<arr[i][j]<<"\t";
        cout<<endl;
     }
       
    
    return 0;
}