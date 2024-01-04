#include <stdio.h>

int main() {
    
    int a;
    
    printf("Enter an integer: ");
    scanf("%d", &a);
    

     (a%2==0) ? printf("Integer is Even", a): printf("Integer is Odd", a);
    
    return 0;
}
