/*Athor:Chenkun Li
E-mail:2622857898@qq.com
Time:March 25,2022
*/
//整数求平均值
#include <iostream>

using namespace std;

int main()
{
    int sum=0,ave,a=0;
    for(int i=1;a!=9999;i++)
    {
        cin>>a;
        if(a==9999)
            break;
        sum+=a;
        ave=sum/i;

    }
    cout<<"Ave is "<<ave<<endl;
    return 0;
}
