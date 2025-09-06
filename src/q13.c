// Write a C program that calculates the sum of all even numbers from 1 to 50 using a while loop.

#include<stdio.h>
int main()
{
    int n=2,sum=0;
    while(n<=50)
    {
    sum=sum+n;
    n=n+2;
    }
    printf("The sum of all even numbers is %d ",sum);
    return 0;
}