#include <iostream>

using namespace std;

int main()
{
    unsigned int count;
   for(count=1;count<=10;++count)
   {
       if(count==5)
       goto  flag;
       cout<<count<<"";
   }
       flag:
   cout<<"\nBroke out of loop at count= "<<count<<endl;
    return 0;
}
