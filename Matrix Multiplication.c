#include<stdio.h>
int main() {
int a[5][5], b[5][5], c[5][5], n, x, y, z;
 
printf("Enter the value of N (N <= 5): ");
scanf("%d", & n);
printf("Enter the elements of Matrix-1: \n");
 
for (x = 0; x < n; x++) {
    for (y = 0; y < n; y++) {
        scanf("%d", & a[x][y]);
    }
}
 
printf("Enter the elements of Matrix-2: \n");
 
for (x = 0; x < n; x++) {
    for (y = 0; y < n; y++) {
        scanf("%d", & b[x][y]);
    }
}
 
for (x = 0; x < n; x++) {
    for (y = 0; y < n; y++) {
        c[x][y] = 0;
        for (z = 0; z < n; z++) {
            c[x][y] += a[x][z] * b[z][y];
        }
    }
}
 
printf("The product of the two matrices is: \n");
for (x = 0; x < n; x++) {
    for (y = 0; y < n; y++) {
        printf("%d\t", c[x][y]);
    }
    printf("\n");
}
return 0;
}
