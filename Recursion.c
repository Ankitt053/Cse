#include<stdio.h>
void main()
{
    int num,fact1;
    printf("Enter the number\t");
    scanf("%d",&num);
    fact1=fact(num);
    printf("Factorial of %d is %d",num,fact1);
}
int fact(int n)
{
    if(n==0)
    return 1;
    else
    return n*fact(n-1);
}
