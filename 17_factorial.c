#include<stdio.h>

            //  Question 17 - Write a program to print factorial of 5.
            
void main(){
    int i=1, n, fact=1;

    printf("Enter a number : ");
    scanf("%d", &n);
    while (i<=n)
    {
        fact = fact*i;
        i++;
    }
    printf("Factorial of %d is %d", n , fact);
    
}