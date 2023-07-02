#include<stdio.h>
 void main(){

    // Question 08 - Write a program to find greater between two numbers.

    int num1;
    printf("Enter first number : ");
    scanf("%d" , &num1);


    int num2;
    printf("Enter second number : ");
    scanf("%d" , &num2);

    if (num1>num2)
    {
        printf("First number is greater than second");
    } else{
        printf("Second number is greater than first");
    }
    


 }