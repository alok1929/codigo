//Sort in descending order
#include <iostream>
using namespace std;
void selsort(int[],int);
int main()
{
    int arr[50],n,i;
    cout<<"Enter the size off the array(not more than 50) : ";
    cin>>n;
    cout<<"\nEnter the elements of the array : ";
    for(i=0;i<n;i++)
        cin>>arr[i];
    selsort(arr,n);
    cout<<"\nThe array in descending order is : "<<endl;
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
void  selsort(int A[],int N)
{
    int big,pos,temp;
    for(int i=0;i<N-1;i++)
    {
        big=A[i];
        pos=i;
        for(int j=i+1;j<N;j++)
        {
            if(A[j]>big)
            {
                big=A[j];
                pos=j;
            }
        }
        temp=A[i];
        A[i]=A[pos];
        A[pos]=temp;
    }
}
