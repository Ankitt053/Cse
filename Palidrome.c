#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++)
        if (str[i] != str[len - i - 1])
            return 0;
    return 1;
}

int main() {
    char input[100];
    int c, start, length;

    printf("Enter a string: ");
    scanf("%s", input);

    printf("Menu: 1. String 2. Substring\nChoice: ");
    scanf("%d", &c);

    c == 1 ? printf(isPalindrome(input) ? "Palindrome!\n" : "Not a palindrome.\n") :
            printf("Enter start and length: "), scanf("%d%d", &start, &length),
            printf((start >= 0 && start + length <= strlen(input)) &&
                    isPalindrome(strncpy(input, input + start, length)) ? "Palindrome!\n" : "Not a palindrome.\n");

    return 0;
}

