/*Author:Chenkun Li
E-mail;2622857898@qq.com
Time:Mar 26,2022*/
//½×³Ë
#include <iostream>

using namespace std;

int main()
{
    int s=0;
    for(int i=1;i<=5;i++)
    {
        s=i;
        int sum=1;
        while(s>0)
        {
            sum*=s;
            s-=1;
        }
       cout<<i<<"\t"<<sum<<endl;
    }
    return 0;
}
