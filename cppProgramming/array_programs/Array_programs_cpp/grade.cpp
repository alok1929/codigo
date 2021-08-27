//Calculate grade of student
#include <iostream>
using namespace std;
int main()
{
    int n,arr[20];
    float sum=0, percentage;
    char grade;
    //user input for number of elements 
    cout<<"Enter number of subjects : ";
    cin>>n;
    //user input for elements values
    cout<<"\nEnter the marks in each subject (out of 100) : \n";
    for(int i=0 ; i<n ; i++)
        cin>>arr[i];
    
    //printing the array and calculating 
    cout<<"\n\nMarks : "<<endl;
    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
        sum+=arr[i];
    }   
    percentage=sum/n;
    cout<<"\n\nPercentage : "<<percentage<<endl;
    
    if(percentage>=90)
        grade = 'A';
    else if(percentage<90 && percentage>=80)
        grade = 'B';
    else if(percentage<80 && percentage>=65)
        grade = 'C';
    else if(percentage<65 && percentage>=45)
        grade = 'D';
    else 
        grade = 'F';
        
    cout<<"\nGrade : "<<grade<<endl;
    return 0;
}