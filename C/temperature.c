#include <stdio.h>

int main(){

    float Cel, Far, tempFar, tempCel;
    printf("Enter temp in celsius");
    scanf("%f",&Cel);
    printf("Enter temp in celsius");
    scanf("%f",&Far);

    tempFar = (1.8*Cel) + 32;
    tempCel = (Far - 32)/1.8;

    printf("The temp in farenheit is %f and the temp in celsius is %f",tempFar,tempCel);

    return 0;

}