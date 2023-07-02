#include<stdio.h>

void main(){


    // Question 02 - Write a program in C to perform all the arithmetic operations.


    int num1;
    printf("Enter num1 : ");
    scanf("%d" , &num1);

    int num2;
    printf("Enter num2 : ");
    scanf("%d" , &num2);

    float sum=num1+num2;
    float sum1=num1-num2;
    float sum2=num1/num2;
    float sum3=num1*num2;

    printf("Addition Of these two numbers is %.2f\n" ,sum);
    printf("Substraction Of these two numbers is %.2f\n" ,sum1);
    printf("Division Of these two numbers give quotient %.2f\n" ,sum2);
    printf("Multiplication Of these two numbers is %.2f\n" ,sum3);

}