//Search element in array (using Binary Search)
#include <iostream>
using namespace std;
int bsearch(int[],int,int);
int main()
{
    int arr[50],i,item,n,index;
    cout<<"Enter the size off the array(not more than 50) : ";
    cin>>n;
    cout<<"\nEnter the elements of the array : ";
    for(i=0;i<n;i++)
        cin>>arr[i];
    cout<<"\nEnter the item to be searched for : ";
    cin>>item;
    index=bsearch(arr,n,item);
    if(index==-1)
        cout<<"\nElement not found ! ";
    else cout<<"\nElement found at index= "<<index<<" and at position= "<<index+1<<endl;
    return 0;
}
int bsearch(int ARR[],int N, int ITEM)
{
    int beg,mid,last;
    beg=0,last=N-1;
    while(beg<=last)
    {
        mid=(beg+last)/2;
        if(ITEM==ARR[mid])
                return mid;
        else if(ITEM>ARR[mid])
            beg=mid+1;
        else last=mid-1;
    }
    return -1;
}
