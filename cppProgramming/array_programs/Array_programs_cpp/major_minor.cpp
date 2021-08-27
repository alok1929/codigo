//Major & minor diagonal elements
#include<iostream>
using namespace std;
int main ()
{
    int arr[10][10], i, j, row, col;

    cout<<"\nEnter number of row and column of the Matrix (must be equal)  : ";
    cin>>row>>col;
        
    cout<<"\nEnter the elements of the Matrix : \n\n";      
    for (i = 0; i < row; ++i)
        for (j = 0; j < col; ++j)
            cin>>arr[i][j];    

    cout<<"\nMatrix is : \n";    //Displaying the matrix
    for (i = 0; i < row; ++i)
    {
        for (j = 0; j < col; ++j)
            cout<<arr[i][j]<<"  ";
        cout<<endl;
    }        

    cout<<"\n Major Diagonal Elements : ";  //For displaying the major diagonal elements
    for(i=0; i< row ; i++)
        cout<<arr[i][i]<<" ";

    cout<<"\n Minor Diagonal Elements : ";  //For displaying the minor diagonal elements
    for(i=0; i< row; i++)
        cout<<arr[i][row - i - 1]<<" ";

    return 0; 
}