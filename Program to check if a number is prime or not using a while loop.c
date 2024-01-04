#include <stdio.h>

int is_prime(int num) {
    if (num < 2) return 0;
    int i = 2;
    while (i * i <= num) {
        if (num % i == 0) return 0;
        i++;
    }
    return 1;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("%d %s a prime number.\n", num, is_prime(num) ? "is" : "is not");

    return 0;
}
