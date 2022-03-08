/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {

int n,x,t=0;
printf("Input a number: ");
scanf("%d",&n);

for(x=1;x<=n;x++)
  {
    t=t+x;
  }
  printf("Sum: %d",t);
  return 0;
}

