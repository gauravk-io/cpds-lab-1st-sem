#include<stdio.h>

            // Question 12 - Write a program to check whether a number is positive, negative or zero.
            
void main(){
    int num;

    printf("Enter a numberr : ");
    scanf("%d" ,&num);

    if (num>0) {
        printf("%d is a positive number\n" , num);
    }
    else if (num<0) {
        printf("%d is a negative number\n" , num);
    }
    else{
        printf("%d is a zero number\n" , num);
    }
      
}