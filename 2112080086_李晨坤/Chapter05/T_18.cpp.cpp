/*Author:Chenkun Li
E-mail:2622857898@qq.com
Time:Mar 26,2022*/
//进制表
#include <iostream>

using namespace std;
int main()
{
    int a,sum=0,f=1,s=0;
   cout<<"十进制\t"<<"二进制\t"<<"八进制\t"<<"十六进制"<<endl;
   for(int i=1;i<=256;i++)
   {
       a=i,sum=0,f=1,s=0;
       while(a!=0)
       {
           s=a%2;
           sum+=s*f;
           a=a/2;
           f*=10;
       }



    cout<<dec<<i<<"\t"<<dec<<sum<<"\t"<<oct<<i<<"\t"<<hex<<i<<endl;
   }
    return 0;
}
