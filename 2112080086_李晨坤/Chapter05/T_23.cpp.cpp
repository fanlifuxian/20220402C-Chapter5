/*Author:Chenkun Li
E-mail:2622857898@qq.com
Time:Mar 26,2022*/
//星号组成的菱形图案
#include <iostream>

using namespace std;

int main()
{
   for(int i=0;i<5;i++)
   {
       for(int j=0;j<4-i;j++)
            cout<<" ";
       for(int j=0;j<(2*i+1);j++)
            cout<<"*";
       cout<<endl;
   }
   for(int i=0;i<4;i++)
   {
       for(int j=0;j<i+1;j++)
        cout<<" ";
       for(int j=0;j<(8-(2*i+1));j++)
        cout<<"*";
       cout<<endl;
   }
    return 0;
}
