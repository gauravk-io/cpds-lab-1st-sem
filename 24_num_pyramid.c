#include<stdio.h>

            //  Write a program in c to print pyramid.

void main(){
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d" , &rows);

    for ( i = 1; i <= rows; ++i)
    {
        for ( j = 1; j <= i; ++j)
        {
            printf("%d ", j);
            
        }

        printf("\n");
    }
    


}