#include <iostream>
#include <conio.h>

using namespace std ;

int main()
{
        int a, b;
        char chara;
        cout<<"input a and b";
        cin >> a >> b; 
        cin >> chara;
        
        switch(chara)
            {
               case '+':
               cout<<"sum= "<< a + b <<endl;
               break;
               
               case '-':
               cout<<"diff= "<< a - b <<endl;
               break;

               case '*':
               cout<<"product= "<< a * b <<endl;
               break;

               case '/':
               cout<<"quotient= "<< a / b <<endl;
               break;

               case '%':
               cout<<"reaminder= "<< a % b <<endl;
               break;

               default:
               cout<<"Invalid operation used";
               break;


             

               }

               



    getch();
    return 0;

}