
/*Author:Chenkun Li
E-mail：2622857898@qq.com
Time:Mar 26,2022*/
//彼得-米纽伊特问题
#include <iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main()
{
   double amount;
   double principal=24;
   double rate,r;
   cout<<setw(21)<<"Amount on deposit"<<setw(10)<<"rate"<<endl;
   cout<<fixed<<setprecision(2);
       for(int s=5;s<=10;++s)
       {
          r=s;
          rate=r/100;
          for(unsigned int year=1;year<=387;++year)
          {
               amount=principal*pow(1.0+rate,year);

          }
         cout<<setw(21)<<amount-24<<setw(10)<<rate<<endl;
         cout<<endl;
       }

    return 0;
}
