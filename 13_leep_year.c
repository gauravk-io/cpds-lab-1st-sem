#include<stdio.h>

            // Question 13 - Write a program to check whether it a leep year or not.
            
void main(){
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (    ((year % 4 == 0) && (year % 100 != 0))    ||      (year % 400 == 0)     ) 
    {
        printf("%d is a leep year" , year);
    }
    
    else{
        printf("%d is not a leep year" , year);
    }

}