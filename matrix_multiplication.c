#include <stdio.h>

#define R1 2
#define C1 3
#define R2 3
#define C2 2

// Function to multiply two matrices: A (R1xC1) and B (R2xC2) -> C (R1xC2)
void multiplyMatrices(int first[R1][C1], int second[R2][C2], int result[R1][C2]) {
    int i, j, k;

    // Initialize result matrix elements to 0
    for (i = 0; i < R1; i++) {
        for (j = 0; j < C2; j++) {
            result[i][j] = 0;
        }
    }

    // Multiply matrices
    for (i = 0; i < R1; i++) {
        for (j = 0; j < C2; j++) {
            for (k = 0; k < C1; k++) {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }
}

// Function to display a matrix
void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        printf("  [ ");
        for (int j = 0; j < cols; j++) {
            printf("%4d ", matrix[i][j]);
        }
        printf("]\n");
    }
}

int main() {
    int A[R1][C1] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int B[R2][C2] = {
        {7, 8},
        {9, 1},
        {2, 3}
    };

    int C[R1][C2];

    printf("--- Matrix Multiplication (A x B) ---\n\n");
    printf("Matrix A (%dx%d):\n", R1, C1);
    printMatrix(R1, C1, A);

    printf("\nMatrix B (%dx%d):\n", R2, C2);
    printMatrix(R2, C2, B);

    multiplyMatrices(A, B, C);

    printf("\nResultant Product Matrix C (%dx%d):\n", R1, C2);
    printMatrix(R1, C2, C);

    return 0;
}
