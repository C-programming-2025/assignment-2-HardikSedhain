// Write a C program that prompts the user for a positive integer and checks if it is a prime number using a while loop.

#include <stdio.h>
#include <math.h>

int main() {
 int n, isPrime;
printf("Enter a number: ");
scanf("%d", &n);
 if (n <= 1)
{
printf("%d is not a prime number.\n", n);
} 
 else
 {
 isPrime = 1; 
int i = 2;
while (i <= n / 2) {
if (n % i == 0) {
isPrime = 0; 
break; 
}
i++;
}
        
if (isPrime) {
 printf("%d is a prime number.\n", n);
} 
else 
{
printf("%d is not a prime number.\n", n);
}
}
return 0;
}