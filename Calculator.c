#include <stdio.h>
void main()
{
    int add(int,int);
    int sub(int,int);
    int mul(int,int);
    float div(int,int);
    int a,b,c;

printf("Enter two Number");
scanf("%d %d ",&a,&b);
printf("\n1.Add\n2.Sub\n3.Mul\n4.Div\n");
printf("Enter the Choice");
int ch;
scanf("%d",&ch);
switch(ch)
{
    case 1:
    c=add(a,b);
    printf("sum=%d",c);
    break;
    case 2:
    c=sub(a,b);
    printf("Diff=%d",c);
    break;
    case 3:
    c=mul(a,b);
    printf("Mul=%d",c);
    break;
    case 4:
    if(b==0)
    printf("div=%d",c);
    else
    {
        float f=(float)div(a,b);
        printf("div=%d",c);
    }
    break;
    default:printf("incorrect");


}
}
int add(int x,int y)
{
    int z=x+y;
    return z;
}
int sub( int x,int y)
{
    int z=x-y;
    return z;
}
int mul(int x,int y)
{
    int z=x*y;
    return z;
}
float div(int x, int y)
{
    int z=(float)x/(float)y;
    return z;
}
