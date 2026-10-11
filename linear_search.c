#include <stdio.h>

// Function to perform Linear Search
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Element found, return index
        }
    }
    return -1; // Element not found
}

int main() {
    int arr[] = {10, 25, 45, 30, 85, 90, 65};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 85;

    printf("--- Linear Search Demonstration ---\n");
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nTarget element to search: %d\n", target);

    int result = linearSearch(arr, n, target);

    if (result != -1) {
        printf("Result: Element %d found at index %d (position %d).\n", target, result, result + 1);
    } else {
        printf("Result: Element %d not found in the array.\n", target);
    }

    return 0;
}
