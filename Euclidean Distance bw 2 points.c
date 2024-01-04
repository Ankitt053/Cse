#include <stdio.h>
#include <math.h>
int main()
{
    float x1,y1,x2,y2;
    printf("Enter the co ordinates of first point:\n");
    scanf("%f %f",&x1,&y1);
    printf("Enter the co ordinates of second point:\n");
    scanf("%f %f",&x2,&y2);
   double d=sqrt((pow(x2-x1,2))+(pow(y2-y1,2)));
   printf("The distance bw two point in plane is : %f",d);
   return 0; 
}
