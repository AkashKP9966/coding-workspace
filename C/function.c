#include <stdio.h>

char Hello(){
    printf("Hello World");
}

int main(){
    char a;
    a =  Hello();
    printf("%s",a);
    return 0;
}