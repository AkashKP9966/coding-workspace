#include <iostream>
#include <conio.h>

using namespace std;

int main() //program to understand do while loop
{
    int I=0,k=1,o,M,d;
    float L,s=0.2;
    cout<< "Enter origin o" <<endl;
    cin>> o ;
    cout<<" Enter the destination"<<endl;
    cin>> d ; 
    cout<<"Enter the available charge L"<<endl;
    cin>>L;
    L=L/100;
    cout<<L <<endl;
    cout<<"Enter M"<<endl;
    cin>> M;

    k--;
    do
    {
        k=k+1;
        while(L>s)
        {
            k++;
            L=(L-(M*0.15));
        }
        I++;
    }while(k!=d);
    cout<<"\n no="<<I<<endl;

    return 0;

}