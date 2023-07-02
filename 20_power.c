#include<stdio.h>

            //  Question 20 - Write a program to print the power of the number.
            
void main(){
    int i = 1, p , b , pow = 1;
    printf("Enter Base then space then Power: ");
    scanf("%d %d" , &b , &p);

    while (i<=p)
    {
        pow = pow * b;
        i++;
    }
    printf("The %d power of base %d is %d", p, b, pow);

    
}