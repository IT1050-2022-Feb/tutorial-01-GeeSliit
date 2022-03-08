/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
int m1,m2;
float Avg;

printf("Enter marks for the first subject: ");
scanf("%d",&m1);

printf("Enter marks for the second subject: ");
scanf("%d",&m2);

Avg=(m1+m2)/2;
  
printf("Average of two marks= %.2f", Avg);
  return 0;
}