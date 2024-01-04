#include<stdio.h>
void main()
{
    float s,l,w,c;
    printf("Enter the sides of square :");
    scanf("%f",&s);
    printf("area:%.2f\n",s*s);
    printf("perimeter:%.2f\n",4*s);
    printf("Enter the Length of width of rectangle :");
    scanf("%f %f", &l,&w);
    printf("area:%.2f\n",l*w);
    printf("perimeter:%.2f\n",2*(l+w));
    printf("Enter the radius of circle :");
    scanf("%f",&c);
    printf("area:%.2f\n",3.14*c*c);
    printf("perimeter:%.2f\n",2*3.14*c); 
}
