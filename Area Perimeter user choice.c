#include <stdio.h>

int main() {
    int choice;
    float radius, side, length, width;
    float area, perimeter;

    printf("Choose a shape to calculate its area and perimeter:\n");
    printf("1. Circle\n");
    printf("2. Square\n");
    printf("3. Rectangle\n");
    printf("Enter your choice (1/2/3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            area = 3.14 * radius * radius;
            perimeter = 2 * 3.14 * radius;
            break;
        case 2:
            printf("Enter the side length of the square: ");
            scanf("%f", &side);
            area = side * side;
            perimeter = 4 * side;
            break;
        case 3:
            printf("Enter the length of the rectangle: ");
            scanf("%f", &length);
            printf("Enter the width of the rectangle: ");
            scanf("%f", &width);
            area = length * width;
            perimeter = 2 * (length + width);
            break;
        default:
            printf("Invalid choice\n");
            return 1;
    }

    printf("Area: %.2f\n", area);
    printf("Perimeter: %.2f\n", perimeter);

    return 0;
}
