#include<stdio.h>

            // Question 22 - write a program to print n Fibonacci series.

void main(){
    int n, i;
    long long int a=0, b=1, c=0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series : \n");

    for (i = 1; i <= n; i++)
    {
        printf("%lld\n", a);    // ll is for long long and 'd' is for integer
        c=a+b;
        a=b;
        b=c;
    }
    

}