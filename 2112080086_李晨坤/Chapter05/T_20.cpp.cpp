//Author:Chenkun Li
//E-mail；2622857898@qq.com
//Time；Mar 26,2022
//毕达哥拉斯的三元组
#include <iostream>

using namespace std;

int main()
{
    cout<<"side1\tside2\thypottenuse"<<endl;
    for(int i=1;i<=500;i++)
    {
        for(int j=1;j<=500;j++)
        {
            for(int k=1;k<=500;k++)
            {
                if(i*i+j*j==k*k)
                    cout<<i<<"\t"<<j<<"\t"<<k<<endl;

            }
        }
    }
    return 0;
}
