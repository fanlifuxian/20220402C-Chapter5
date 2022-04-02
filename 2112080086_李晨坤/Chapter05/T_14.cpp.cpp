/*Author:Chenkun Li
E-mail:2622857898@qq.com
Time:Mar 26,2022*/
//计算总销售量
#include <iostream>

using namespace std;

int main()
{
    int grade,product,prize,sum=0;
    flag:
   cout<<"请输入产品编号： ";
   cin>>grade;
   while(grade!=0)
   {

     switch(grade)
     {
         case 1:prize=2.98;break;
         case 2:prize=4.50;break;
         case 3:prize=9.98;break;
         case 4:prize=4.49;break;
         case 5:prize=6.87;break;
     }
         cout<<"请输入产品销量： ";
         cin>>product;
         sum+=prize*product;
         goto flag;

   }
    cout<<"总销售额为： "<<sum<<endl;
   return 0;
}
