/*Author:Chenkun Li
E-mail；2622857898@@qq.com
Time:Mar 26,2022*/
//使用嵌套的for循环绘制图案
#include <iostream>

using namespace std;

int main()
{
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=i;j++)
            cout<<"*";
        cout<<endl;
    }
    cout<<endl;

     for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=11-i;j++)
            cout<<"*";
        cout<<endl;
    }
    cout<<endl;

     for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=10;j++)
        {
            if(j>=i)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

      for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=10;j++)
        {
            if(j>=11-i)
                cout<<"*";
            else
                cout<<" ";

        }
        cout<<endl;
    }
    cout<<endl;

    return 0;
}
