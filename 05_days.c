#include <stdio.h>

void main()
{

  // Question 05 - Write a program to convert days into years, months and days.

  // int days;
  // printf("Enter days to convert it : ");
  // scanf("%d", &days);

  // int year = days/365;
  // printf("%d Year,", year);

  // int year1 = days%365;
  // int month = year1/30;
  // printf(" %d month," , month);

  // int month1 = year1%30;
  // printf(" %d days", month1);

  int days;
  printf("Enter days to convert it : ");
  scanf("%d", &days);

  int year = days / 365;
  printf("%d Year,", year);

  days = days % 365; // days updated
  int month = days / 30;
  printf("%d Months,", month);

  days = days % 30; // days updated
  int weeks = days / 7;
  printf("%d Weeks,", weeks);

  days = days % 7; // days updated
  printf("%d Days", days);
}