/*Author:Chenkun Li
E-mail:2622857898@qq.com
Time:Mar 26,2022*/
//Çó¦°µÄÖµ
#include <iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main()
{
    double pi=0,t;
    for(int i=1;i<=1000;i++)
    {
        pi=0;
        for(int j=1;j<=i;j++)
       {
           t=pow(-1,j+1);
           pi+=4/((2*j-1)*t);
        }
         cout<<fixed<<setprecision(6)<<pi<<endl;
    }
    return 0;
}
