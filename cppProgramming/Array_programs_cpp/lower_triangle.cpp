//Sum of lower triangular elements of matrix
#include <iostream>
using namespace std;
int main()
{
    int row,col, arr[20][20], sum_lower=0;
    //user input for number of elements 
    cout<<"Enter row and column of the array : ";
    cin>>row>>col;
    //user input for elements values
    cout<<"\nEnter elements of the array : ";
    for(int i=0 ; i<row ; i++)
       for(int j=0 ; j<col ; j++)
            cin>>arr[i][j];
    
    //printing the array
    cout<<"\nARRAY : "<<endl;
    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<col ; j++)
            cout<<arr[i][j]<<"\t";
        cout<<endl;
     }

    //calculating the sum of lower triangular elements 
    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<col ; j++)
        {
            if(j<=i)
                sum_lower+=arr[i][j];
        }
     }
    
    cout<<"Sum of the Lower Triangular elements is : "<<sum_lower<<endl;
    return 0;
}