//C++ Program to Find LCM
#include<iostream>
using namespace std;
int main()
{
	int a =7,b=5,lcm;
	if(a>b)
	{
		 lcm = a;
   else
   lcm = b;
   while(1) {
      if( lcm%a==0 && lcm%b==0 ) {
         cout<<"The LCM of "<<a<<" and "<<b<<" is "<<lcm;
         break;
      }
      lcm++;
   }
   return 0;
}
