#include<stdio.h>

void main(){

    // Question 07 - Write a program to calculate the avg age of five students.

    int age1;
    printf("Enter the age1 : ");
    scanf("%d" , &age1);

    int age2;
    printf("Enter the age2 : ");
    scanf("%d" , &age2);

    int age3;
    printf("Enter the age3 : ");
    scanf("%d" , &age3);

    int age4;
    printf("Enter the age4 : ");
    scanf("%d" , &age4);

    int age5;
    printf("Enter the age5 : ");
    scanf("%d" , &age5);

    float avg = (age1+age2+age3+age4+age5)/5;
    printf("Average of the age of five students is %.2f" , avg);


}