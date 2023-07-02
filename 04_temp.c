#include<stdio.h>

void main(){

    //  Question 04 - Write a program in C to convert temperature from celsius to fahrenheit.

    float temp;
    printf("Enter the temperature in celsius : ");
    scanf("%f" , &temp);

    float conv = (temp*9/5)+32;
    printf("The temperature in fahrenheit is : %.2f", conv);
}