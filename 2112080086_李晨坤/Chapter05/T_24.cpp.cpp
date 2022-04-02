/*Author:Chenkun Li
E-mail:2622857898@qq.com
Time:Mar 26,2022*/
//修改星号组成的菱形图案
#include <iostream>

using namespace std;

int main()
{
   int n=0;
   cout<<"请输入菱形的边长： ";
   cin>>n;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<(n-1)-i;j++)
            cout<<" ";
       for(int j=0;j<(2*i+1);j++)
            cout<<"*";
       cout<<endl;
   }
   for(int i=0;i<n-1;i++)
   {
       for(int j=0;j<i+1;j++)
        cout<<" ";
       for(int j=0;j<(2*(n-1)-(2*i+1));j++)
        cout<<"*";
       cout<<endl;
   }
    return 0;
}

