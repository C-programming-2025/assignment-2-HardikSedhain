// Write a C program that prompts the user for a positive integer and calculates the factorial of that number using a while loop.



#include<stdio.h>
int main()
{
    int i=1, n;
    unsigned long long fact=1;
    printf("enter a positive integer:");
    scanf("%d",&n);
    while(i<=n)
    {
    fact=fact*i;
    i++;
    }
    printf("The factorial of %d= %llu ",n,fact);
    return 0;
}