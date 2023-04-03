#include<stdio.h>

int main(){
    int N;
    float P, R, Interest;

    printf("Enter the principle amount\n");
    scanf("%f",&P);
    printf("Enter the rate of interest\n");
    scanf("%f",&R);
    R = R / 100;
    printf("Enter the period of time in years\n");
    scanf("%d",&N);

    Interest = (P*N*R);

    printf("Interest amount  is %f ", Interest);

    return 0;
}