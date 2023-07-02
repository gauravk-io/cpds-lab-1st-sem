#include<stdio.h>

            // Question 16 - Write a program to print 10 natural munbers and sum it.
            
void main(){
    int i=1, n , sum=0;

    printf("Enter a positive number : ");
    scanf("%d" , &n);

    while (i<=n)
    {
        printf("%d " , i);
        sum += i;
        i++;
    }
    printf("\nSum of first %d natural numbers is %d" , n,sum);
    

    
}