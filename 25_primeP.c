#include<stdio.h>

void main(){

            // Program in C to print n Prime Number.
            #include <stdio.h>

int isPrime(int num) {
    if (num < 2) return 0; // Not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; // Divisible by another number
    }
    return 1; // Prime
}

void printNPrimes(int n) {
    int count = 0, num = 2;
    while (count < n) {
        if (isPrime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of prime numbers to print: ");
    scanf("%d", &n);
    printNPrimes(n);
    return 0;
}

    
    
}
