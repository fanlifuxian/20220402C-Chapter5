/*Author:Chen Li
E-mail:2622857898@qq.com
Time:Mar 26,2022*/
//找最小整数
#include <iostream>

using namespace std;

int main()
{
    int n,a[100000],min=10000000;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<min)
            min=a[i];

    }
    cout<<"Min is "<<min<<endl;
    return 0;
}
