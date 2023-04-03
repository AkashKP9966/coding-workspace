#include<iostream>
#include<conio.h>

using namespace std;

double sumfun(int n, double arr[]) {
    double s=0;
    for(int i=0; i<n; i++){
        s= s + arr[i];
    }
    return s;
}

int main()
{
    int n;
    char chara, k,Yes,No;
    double sum;
  do{
    cout << "Enter the value of n:";
    cin >> n;
    double arr[n];
    cout << "Enter the elements:";

    for(int i = 0; i < n; i++) {
            cin >> arr[i] ;
     }
    cout <<"Choose the following" << endl;
    cout << "a)sum" << endl;
    cout << "b)average "<< endl;
    cout << "Enter your choice: ";
   
    cin >> chara ; 
    switch(chara) {
        case 'a':
            cout<< "Sum:"<< sumfun(n,arr)<< endl;
        break;
           
          case 'b':
            cout<< "Average:"<< sumfun(n,arr)/n<< endl;
          break;

          default:
          cout<<"error"<< endl;

       }
        cout<<"Do You Wish To Continue Y/N ?";
    
        cin>>k;
        
       
     }
     while(k=='Y'); 
        

    getch();
    return 0;
}

