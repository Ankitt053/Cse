#include <stdio.h>

int main() {
    int number, digit, digit_sum = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    while (number > 0) {

        digit = number % 10;
        digit_sum += digit;
        number = number / 10;
    }
    printf("The sum of digits is: %d\n", digit_sum);

    return 0;
}
