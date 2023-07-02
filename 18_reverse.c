#include<stdio.h>

            // Question 18 - Write a program to display reverse of a given number entered by user.
            
void main(){
    int num, rev = 0, rem;

    printf("Enter a number: ");
    scanf("%d" , &num);

    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 +rem;
        num /= 10;

    }
    printf("The reverse of the number is: %d\n", rev);
    
}
        /*
            EXPLANATION:

            1. we start by declaring three integer variable: 'num' to store the reverse of the number and 'rem' to store the remainder
               when dividing the number by 10.
            
            2. We prompt the user to enter a number using the 'printf' and 'scanf' functions.

            3. we then use a while loop to reverse the number. inside the loop, we get the remainder of the number when divided by 10 
               using the modulo operator '%'. we then add this remainder to the reverse by multiplying it by 10 and adding the 
               remainder. finally, we divide the number by 10 to remove the last digit.

            4. once loop finishes, we print the reverse using the 'printf' function.        
        */