// Write a C program that calculates the absolute value of a given number without using the built-in absolute value function.

int main()
{
    int n,i;
    printf("enter a number:");
    scanf("%d",&n);
    if(n<0) 
    {
        i=(-1)*n;
        printf("The absolute value of given number is %d",i);
    }
    else 
    {
    printf("The absolute value of given number is %d",n);
}
    return 0;
}