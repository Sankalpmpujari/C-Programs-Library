#include <stdio.h>

// Recursive function to calculate factorial of a number
long long factorial(int n) {
    if (n < 0) {
        return -1; // Factorial is not defined for negative numbers
    }
    if (n == 0 || n == 1) {
        return 1; // Base case: 0! = 1, 1! = 1
    }
    return n * factorial(n - 1); // Recursive call
}

int main() {
    int numbers[] = {0, 1, 5, 7, 10};
    int count = sizeof(numbers) / sizeof(numbers[0]);

    printf("--- Factorial Calculation (Using Recursion) ---\n");
    for (int i = 0; i < count; i++) {
        int num = numbers[i];
        long long result = factorial(num);
        printf("Factorial of %d (%d!) = %lld\n", num, num, result);
    }

    return 0;
}
