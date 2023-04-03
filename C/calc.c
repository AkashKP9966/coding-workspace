#include<stdio.h>
#include<conio.h>

int main(){
    int a,b,sum,diff;
    int calc;
    printf("Enter numbers \n");
    scanf("%d \n %d",&a,&b);
    scanf(" %d",&calc);
   
    sum = a + b;
    diff = a - b;
    switch(calc)
    {
    case 1:
        printf("sum is %d",sum);
        break;
    case 2:
        printf("diff is %d",diff);
        break;
    
    default:
        break;
    }
   

    

    
getch();
return 0;
}