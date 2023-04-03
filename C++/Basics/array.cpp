#include<iostream>
#include<conio.h>

using namespace std;

int main()
{  
  int i;
  double  arr[10] ,sum=0;
   for(i=0; i<=10; i++)
    {
      arr[i]=i;
    
    }
     for(i=0; i<10; i++)
      {
        sum= arr[i] + sum;
      }
       
       cout<< sum/10<< endl;
       

    
  getch();
  return 0;

}
