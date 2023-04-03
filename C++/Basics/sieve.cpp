#include<iostream>
#include<conio.h>

using namespace std;

int main(){

int  num, i, j;
cout << "Enter the num \n";
cin >> num;

bool arr[num + 1] ;

for( i = 0; i <= num; i++){
    arr[i] = true;
}
 
for(i = 2; i*i <= num; i++){
     if(arr[i] == true){
        for(j = i*i; j <= num; j+=i)
            arr[j] = false;
        
    }
}

for(i = 2; i <= num; i++){
    if(arr[i])
        cout << i <<" ";
}




getch();
return 0;
}