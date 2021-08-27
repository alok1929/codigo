//C++ Program to Find LCM
#include<iostream>
using namespace std;
int main()
{
     int a, b, lcm, ai;
     cout<<"Enter 2 numbers "<<endl;
     cin>>a>>" ">>b;

     for(int i=0;i<=b;i++)
     {
        ai = a*i;
        if(ai%b == 0)
          {
            lcm = ai;
            break;
          }
     }
     cout<<"The LCM of 2 numbers is "<<LCM<<endl;

}
