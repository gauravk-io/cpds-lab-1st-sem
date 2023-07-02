#include<stdio.h>

            // Question 11 - write a program to check whether a character is vowel or consonant.

void main(){
    char ch;

    printf("Enter an alphabet : ");
    scanf("%c" , &ch);

    if (ch == 'a' ||ch == 'A' || ch == 'e' ||ch == 'E' || ch == 'i' ||ch == 'I' || ch == 'o' ||ch == 'O' || ch == 'u' ||ch == 'U'){
        printf("%c is a vowel\n" , ch);
    }
    else{
        printf("%c is a consonant\n" , ch);
    }
    
    
}