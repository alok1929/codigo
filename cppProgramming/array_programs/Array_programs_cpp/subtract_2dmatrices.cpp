//Print subtraction of two matrices
#include <iostream>
using namespace std;
int main()
{
    int row,col, arrA[20][20], arrB[20][20], arrC[20][20];
    //user input for number of elements 
    cout<<"Enter row and column of the array A and B : ";
    cin>>row>>col;
    
    //Array A
    cout<<"\nEnter elements of the Array A : \n";
    for(int i=0 ; i<row ; i++)
       for(int j=0 ; j<col ; j++)
            cin>>arrA[i][j];
    
    
    //Array B
    cout<<"\nEnter elements of the Array B : \n";
    for(int i=0 ; i<row ; i++)
       for(int j=0 ; j<col ; j++)
            cin>>arrB[i][j];
    
    //printing the array A
    cout<<"\n\nArray A : "<<endl;
    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<col ; j++)
            cout<<arrA[i][j]<<"  ";
        cout<<endl;
    } 
     
    //printing the array B
    cout<<"\nArray B : "<<endl;
    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<col ; j++)
            cout<<arrB[i][j]<<"  ";
        cout<<endl;
    }
     
    //Difference of the arrays
    for(int i=0 ; i<row ; i++)
       for(int j=0 ; j<col ; j++)
            arrC[i][j] = arrA[i][j] - arrB[i][j];
    
    //printing the difference
    cout<<"\nSubtraction of the two arrays : "<<endl;
    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<col ; j++)
            cout<<arrC[i][j]<<"  ";
        cout<<endl;
     }
    

    return 0;
}