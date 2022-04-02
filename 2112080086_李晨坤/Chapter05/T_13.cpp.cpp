
/*Athor:Chenkun Li
E-mail:2622857898@qq.com
Time:Mar 25,2022*/
//Ãı–ŒÕº
#include <iostream>

using namespace std;

int main()
{
    int n;
    for(int i=1;i<=5;i++)
    {
        cin>>n;
        while(n<1||n>30)
        {
            cout<<"Enter n again"<<endl;
            cin>>n;
        }
        for(int j=1;j<=n;j++)
            cout<<"*";
        cout<<endl;
    }
    return 0;
}
