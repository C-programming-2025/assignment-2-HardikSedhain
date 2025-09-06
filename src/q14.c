// Write a C program that prompts the user for a positive integer and prints all the factors of that number using a for loop.

#include<stdio.h>
int main()
{
    int i,n;
    printf("enter a positive integer:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
   { 
    if(n%i==0)
    {
    printf("%d\n",i);
}
   }
    return 0;
}