//Display the transpose of matrix
#include <iostream>
using namespace std;
int main()
{
    int row,col, arrA[20][20], transpose[20][20];
    //user input for number of elements 
    cout<<"Enter row and column of the array : ";
    cin>>row>>col;
    
    //Array
    cout<<"\nEnter elements of the array : \n";
    for(int i=0 ; i<row ; i++)
       for(int j=0 ; j<col ; j++)
            cin>>arrA[i][j];
    
    //printing the array
    cout<<"\nArray : "<<endl;
    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<col ; j++)
            cout<<arrA[i][j]<<"  ";
        cout<<endl;
    } 

    //transpose
    for(int i=0 ; i<row ; i++)
       for(int j=0 ; j<col ; j++)
            transpose[j][i] = arrA[i][j];

    //printing transpose
    cout<<"\nTranspose : "<<endl;
    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<col ; j++)
            cout<<transpose[i][j]<<"  ";
        cout<<endl;
    } 
    
return 0;
}
     