#include<stdio.h>

            // Question 21 - Write a program to check given number is prime numbers.
            
void main(){
    int num, i, count;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // 0 and 1 are not prime
    if (num <= 1) {
        printf("%d is not a prime number\n", num);
    }

    count = 0;
    for (i = 2; i <= num; i++) {
        if (num % i == 0) {
            count++;
        }
    }

    if (count == 1)
        printf("%d is a prime number\n", num);
    else
        printf("%d is not a prime number\n", num);
    
    
}