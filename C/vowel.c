#include<stdio.h>

int main(){
    char ch;

    printf("Please Enter an alphabet: \n");
    scanf(" %c", &ch);
    
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')  {
	printf("\n %c is a VOWEL.", ch);
}
else{
    printf("Not vowel Please enter a, e, i, o, u");
}
}