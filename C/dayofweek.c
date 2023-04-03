#include <stdio.h>

int main(){
    int day;
    printf("Enter the day \n");
    scanf("%d",&day);

    switch(day){
        case 1:
        printf("Day is Sunday");
        break;

        case 2:
        printf("Day is Monday");
        break;

        case 3:
        printf("Day is Tuesday");
        break;

        case 4:
        printf("Day is Wednesday");
        break;

        case 5:
        printf("Day is Thursday");
        break;

        case 6:
        printf("Day is Friday");
        break;

        case 7:
        printf("Day is Saturday");
        break;

        default:
        printf("Enter day between 1-7");
        break;

    
    }

    return 0;
}