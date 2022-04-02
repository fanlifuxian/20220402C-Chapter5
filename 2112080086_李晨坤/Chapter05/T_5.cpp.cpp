/*Author:Chenkun Li
E-mail:2622857898@qq.com
Time:Mar 26,2022*/
//整数求和

#include <iostream>

using namespace std;

int main()
{
    int sum=0,n,s;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>s;
        sum+=s;
    }
      cout<<sum/n<<endl;
    return 0;
}
