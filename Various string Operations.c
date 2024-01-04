#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], result[200];
    int choice, start, length;
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);
    printf("\nString Operations Menu:\n");
    printf("1. Concatenate\n");
    printf("2. Length\n");
    printf("3. Compare\n");
    printf("4. Copy\n");
    printf("5. Substring\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            strcpy(result, str1);
            strcat(result, str2); 
            printf("Concatenated string: %s\n", result);
            break;

        case 2:
            printf("Length of the first string: %lu\n", strlen(str1));
            printf("Length of the second string: %lu\n", strlen(str2));
            break;

        case 3:
          
            if (strcmp(str1, str2) == 0) {
                printf("The two strings are equal.\n");
            } else {
                printf("The two strings are not equal.\n");
            }
            break;

        case 4:
            strcpy(result, str1);
            printf("Copied string: %s\n", result);
            break;

        case 5:
            printf("Enter the starting index for substring: ");
            scanf("%d", &start);
            printf("Enter the length of substring: ");
            scanf("%d", &length);
            strncpy(result, str1 + start, length);
            result[length] = '\0'; // Null-terminate the substring
            printf("Substring: %s\n", result);
            break;

        default:
            printf("Invalid choice. Please enter a number between 1 and 5.\n");
            break;
    }

    return 0;
}
