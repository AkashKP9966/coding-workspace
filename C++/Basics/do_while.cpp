#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int i=0,sum=0,temp;
    
        do
        {
        
          sum= sum + (24 + i*2);
          i++;
         
          
        }
        while(i<10);
        cout<<"sum= "<<sum;
    return 0;

}