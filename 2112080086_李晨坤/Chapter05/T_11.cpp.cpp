/*Author:Chenkun Li
E-mail：2622857898@qq.com
Time:Mar 26,2022*/
//复利
#include <iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main()
{
   double amount;
   double principal=1000.0;
   double rate,r;
   cout<<"Year"<<setw(21)<<"Amount on deposit"<<setw(10)<<"rate"<<endl;
   cout<<fixed<<setprecision(2);
       for(int s=5;s<=10;++s)
       {
          r=s;
          rate=r/100;
          for(unsigned int year=1;year<=10;++year)
          {
               amount=principal*pow(1.0+rate,year);
               cout<<setw(4)<<year<<setw(21)<<amount<<setw(10)<<rate<<endl;

          }
         cout<<endl;
       }

    return 0;
}
