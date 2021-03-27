#include<iostream>
using namespace std;

int main()
{
    int ch;
    cout<<"ENTER THE DAY NUMBER:";
    cin>>ch;
    cout<<"IT IS ";
    switch(ch)
    {
        case 1: cout<<"SUNDAY"<<endl;
        break;
        case 2: cout<<"MONDAY"<<endl;
        break;
        case 3: cout<<"TUESDAY"<<endl;
        break;
        case 4: cout<<"WEDNESDAY"<<endl;
        break;
        case 5: cout<<"THURSDAY"<<endl;
        break;
        case 6: cout<<"FRIDAY"<<endl;
        break;
        case 7: cout<<"SATURDAY"<<endl;
        break;
    }
}
