// Write a C program that calculates the factorial of a given number using a do-while loop.

#include<stdio.h>
int main()
{
    int i=1, n;
    unsigned long long fact=1;
    printf("enter a positive integer:");
    scanf("%d",&n);
    do
    {
    fact=fact*i;
    i++;
    } while(i<=n);
    printf("The factorial of %d= %llu ",n,fact);
    return 0;
}