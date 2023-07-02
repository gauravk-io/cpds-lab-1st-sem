#include<stdio.h>

            // Question 15 - Write a program to display the name of the days of a week.

void main(){
    char ch;
    printf("Enter any number from 1 to 7: ");
    scanf("%c" , &ch);

    if (ch=='1') {
        printf("The day is Monday");
    }
    else if (ch=='2') {
        printf("The day is Tuesday");   
    }
    else if (ch=='3') {
        printf("The day is Wednesday");   
    }
    else if (ch=='4') {
        printf("The day is Thursday");   
    }
    else if (ch=='5') {
        printf("The day is Friday");   
    }
    else if (ch=='6') {
        printf("The day is Saturday");   
    }
    else if (ch=='7') {
        printf("The day is Sunday");   
    }
    else{
        printf("Enter Number between 1 to 7");
    }
    
    
    
}