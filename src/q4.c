// Write a C program that prints all even numbers between 1 and 100 using a for loop.

#include<stdio.h>
int main()
{
    int i,n=0;
    for(i=0;i<=100;i++)
    if(i%2==0){
    printf("%d\n",i);}
    return 0;
}