/*Author:Chenkun Li
E-mail£»2622857898@qq.com
Time:Mar 26,2022*/
//计算复利
#include <iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main()
{
    long long int amount,principal=100000,a1=0,a2=0,f=100;
    double rate=0.05;
    cout<<"Year"<<setw(21)<<"Amount on depoist"<<endl;
    for(unsigned int year=1;year<=10;year++)
   {

        amount=principal*pow(1.0+rate,year);
        a1=amount/100;
        a2=amount%10+amount%100/10*10;
        if(amount%100/10!=0)
          cout<<setw(4)<<year<<setw(21)<<a1<<"."<<a2<<endl;
        else
            cout<<setw(4)<<year<<setw(21)<<a1<<".0"<<a2<<endl;
    }
    return 0;
}
