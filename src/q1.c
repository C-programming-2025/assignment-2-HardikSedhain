/* Write a C program that takes an integer input from the user and determines if it is positive, negative, or zero.
Expected Output:
If n > 0, print Positive (case-insensitive, extra messages allowed).
If n < 0, print Negative (case-insensitive, extra messages allowed).
If n == 0, print Zero (case-insensitive, extra messages allowed).
*/

#include<stdio.h>
int main()
{
    int n;
    printf("enter a integer:");
    scanf("%d",&n);
    if(n>0){
        printf("It is positive");
    }
    else if(n<0){
        printf("It is negative");
    }
    else {
    printf("It is Zero");}
    return 0;
}