/*Author:Chenkun Li
E-mail:2622857898@qq.com
Time:Mar 26,2022*/
//È¥³ıcontinueÓï¾ä
#include <iostream>

using namespace std;

int main()
{
   for(unsigned int count=1;count<=10;++count)
   {
       if(count!=5)
       cout<<count<<"";
   }
   cout<<"\nUsed continue to skip printing 5"<<endl;
    return 0;
}
