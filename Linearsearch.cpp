#include<iostream>
using namespace std;
int main()
{
  cout<<"enter number of elements:";
  int n;
  cin>>n;
  int arr[n];
  cout<<"enter those elements:";
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }
  int search,k=0;
  cout<<"enter the search element:";
  cin>>search;
  for(int i=0;i<n;i++)
  {
      if(arr[i]==search)
      {
          k++;
          cout<<"element found at " << (i+1) << " position";
          break;
      }
  }
  if(k==0)
  {
      cout<<"element not found";
  }
}
