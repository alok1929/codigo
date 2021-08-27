//Merge two sorted arrays
#include <iostream>
using namespace std;
void merge(int[],int,int[],int,int[]);
int main()
{
    int arr1[50],arr2[50],c[50],n,m,i,j,small,pos,temp;
    cout<<"Enter the size of array-1 ";
    cin>>n;
    cout<<"\nEnter the elements of array-1 (sorted) : ";
    for(i=0;i<n;i++)
        cin>>arr1[i];
    cout<<"\nARRAY-1 : ";
    for(i=0;i<n;i++)
        cout<<arr1[i]<<" ";
    cout<<"\nEnter the size of array-2 ";
    cin>>m;
    cout<<"\nEnter the elements of array-2 (sorted) : ";
    for(i=0;i<m;i++)
        cin>>arr2[i];
    cout<<"\nARRAY-2 : ";
    for(i=0;i<m;i++)
        cout<<arr2[i]<<" ";
    merge(arr1,n,arr2,m,c);
    //sorting the merged array
    cout<<"\nMerged array is : ";
    for(i=0;i<n+m;i++)
        cout<<c[i]<<" ";
    return 0;
}

void merge(int A[],int N,int B[],int M,int C[])
{
    int a,b,c;
    for(a=0,b=0,c=0;a<N,b<M;)
    {
        if(A[a]<B[b])
        {
            C[c]=A[a];
            a=a+1;
            c=c+1;
        }
        else
        {
            C[c]=B[b];
            c=c+1;
            b=b+1;
        }
    }
    if(a>N)
    {
        while(b<=M)
        {
            C[c]=B[b];
            c=c+1;
            b=b+1;
        }
    }
     if(b>M)
    {
        while(a<=N)
        {
            C[c]=A[a];
            c=c+1;
            a=a+1;
        }
    }
}
