/*Author:Chenkun Li
E-mail:2622857898@qq.com
Time:Mar 26,2022*/
//奇整数的乘积
#include <iostream>

using namespace std;

int main()
{
    int sum=1;
    for(int i=1;i<=15;i+=2)
    {
        sum*=i;
    }
    cout<<sum<<endl;
    return 0;
}
