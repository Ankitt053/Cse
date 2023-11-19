#include <stdio.h>

int main() {
    int n;

   
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    
   
  
    int arr[n];

   
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    
    int max = arr[0];
    int index = 0;

  
    for (int i = 1; i < n; ++i) {
        if (arr[i] > max) {
            max = arr[i];
            index = i;
        }
    }

    
    printf("Maximum Element: %d\n", max);
    printf("Index of Maximum Element: %d\n", index);

    return 0;
}
