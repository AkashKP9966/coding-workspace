#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int i,j,n;
    for(i=0;i<=6;i++)
    {
        for(j=0;j<=2*i-1;j++)
        {
            if(i>j)
            {
                cout<< 2*j ;
            }
            
                 else
                 {
                     cout<< j ;
                 }
         
        cout<< " ";
        }
    cout<<endl;
    }
    getch();

    return 0;
}