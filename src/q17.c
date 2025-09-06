// Write a C program that prompts the user for a positive integer and prints a countdown from that number to 1 using a for loop.

#include <stdio.h>
int main() 
{
int n;
printf("Enter a positive integer: ");
scanf("%d", &n);
printf("Countdown: ");
for (int i = n; i >= 1; i--) 
{
printf("%d ", i);
}
printf("\n");
return 0;
}