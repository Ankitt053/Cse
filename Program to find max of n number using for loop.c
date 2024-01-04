#include <stdio.h>
int main() {
    int n,max,num;
    printf("Enter the number of values: ");
    scanf("%d %d",&n,&max);
for(int i=2;i<=20;i++){
printf("Enter the number %d: ",i);
scanf("%d",&num);
if(num>max){max=num;}}
printf("The maximum number is: %d\n",max);
    return 0;
}
