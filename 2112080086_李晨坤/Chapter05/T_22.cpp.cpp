//Author:Chenkun Li
//E-mail:2622857898@qq.com
//Time:Mar 26,2022
//德摩根定律
#include <iostream>

using namespace std;

int main()
{
    int x=5,y=6,a=1,b=2,g=6,i=4,j=5;
    cout<<(!(x<5)&&!(y>=7))<<endl;
    cout<<!(x<5||y>=7)<<endl;
    cout<<endl;

    cout<<(!(a==b)||!(g!=5))<<endl;
    cout<<!(a==b&&g!=5)<<endl;
    cout<<endl;

    cout<<!(x<=8&&y>4)<<endl;
    cout<<(!(x<=8)||!(y>4))<<endl;
    cout<<endl;

    cout<<!((i>4)||(j<=6))<<endl;
    cout<<(!(i>4)&&!(j<=6))<<endl;
    return 0;
}
