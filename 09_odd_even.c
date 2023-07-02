#include<stdio.h>

void main(){

    //  Question 09 - Write a program to check the number is odd or even.

    int num;
    printf("Enter the number to check : ");
    scanf("%d" , &num);

    if (num%2==0)
    {
        printf("Entered number is even");
    } else{
        printf("Entered number is odd");
    }
    
}