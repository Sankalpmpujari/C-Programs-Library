#include <stdio.h>

// Function to perform Binary Search on a sorted array
int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if target is present at mid
        if (arr[mid] == target) {
            return mid;
        }

        // If target greater, ignore left half
        if (arr[mid] < target) {
            left = mid + 1;
        }
        // If target is smaller, ignore right half
        else {
            right = mid - 1;
        }
    }

    // Element was not present in the array
    return -1;
}

int main() {
    // Array must be sorted for Binary Search
    int arr[] = {4, 11, 19, 27, 33, 42, 55, 68, 79, 91};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 42;

    printf("--- Binary Search Demonstration ---\n");
    printf("Sorted array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nTarget element to search: %d\n", target);

    int result = binarySearch(arr, 0, n - 1, target);

    if (result != -1) {
        printf("Result: Element %d found at index %d (position %d).\n", target, result, result + 1);
    } else {
        printf("Result: Element %d not found in the array.\n", target);
    }

    return 0;
}
