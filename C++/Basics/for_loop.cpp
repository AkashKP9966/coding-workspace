#include<iostream>
#include<conio.h>

using namespace std ;

int func()
{
  static int k=10;
  // cout<<k <<endl;
 return k--;
}

int main()
{ 
    int i=0;
     for(func();func() ; func() )
        {
          func();
          i++;
        }
          cout<<i;

return 0 ;

}