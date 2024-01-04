#include <stdio.h>

int main() {
    int number, factorial = 1;

    printf("Enter Number\n: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else if (number == 0) {
        printf("The factorial of 0 is 1.\n");
    } else {
        for (int i = 1; i <= number; i++) {
            factorial *= i;
        }
        printf("The factorial of %d is %d.\n", number, factorial);
    }

    return 0;
}
