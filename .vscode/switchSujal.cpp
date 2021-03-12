#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout<<"enter the four marks:";
    int m1,m2,m3,m4;
    cin>>m1>>m2>>m3>>m4;
    int total,choice;
    total=m1+m2+m3+m4;
    float percentage;
    percentage=total/4.0;
    choice=(int)percentage/10;//choice =6
    cout<<"total marks="<<total<<endl;
    cout<<setprecision(2);
    cout<<"percentage=" << percentage<<endl;
    cout<<"the result of the student is";
        cout<<"choice value"<<choice<<endl;
        switch(choice)
        {
       for(int i=10;i>=6;i--){
       if(choice==i)
       {
           cout<<"first class"<<endl;
       }
       }
       case 5:
       {
           cout<<"second class"<<endl;
       }
       break;
       case 4:
       {
           cout<<"pass class"<<endl;
       }
       break;
       if(choice<4)
       {
           cout<<"stay away from dad "<<endl;
       }

        }

   
}

    