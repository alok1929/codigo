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
    choice=(int)percentage/10;
    cout<<"total marks="<<total<<endl;
    cout<<setprecision(2);
    cout<<"percentage=" << percentage<<endl;
    cout<<"the result of the student is";
    switch(choice)
    {
        case 6:
        if(choice>=6 && choice <=10)
        {
            cout<<"first class"<<endl;
        }
        break;
        case 5:
        if(choice==5)
        {
            cout<<"second class"<<endl;
        }
        break;
        case 4:
        if(choice==4)
        {
            cout<<"pass class"<<endl;
        }
        break;
        case 3:
        if(choice<=3)
        {
            cout<<"fail"<<endl;
        }
        break;
        default:cout<<"wrong"<<endl;
        break;
    }
}