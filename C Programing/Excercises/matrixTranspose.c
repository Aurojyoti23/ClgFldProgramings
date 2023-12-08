// Write a c program to read a Matrix of size mxn and prints it's transpose

#include <stdio.h>

int main() {
    int m, n;

    // Get matrix dimensions
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    // Declare the matrix and its transpose
    int matrix[m][n], transpose[n][m];

    // Input matrix elements
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("Enter element matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate transpose
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Print original matrix
    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Print transpose matrix
    printf("\nTranspose Matrix:\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
