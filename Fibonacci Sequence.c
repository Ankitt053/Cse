#include <stdio.h>

int main() {
    int n, a = 0, b = 1;
    printf("Enter the Number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a);
        int next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
    return 0;
}
