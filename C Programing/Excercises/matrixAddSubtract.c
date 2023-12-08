#include <stdio.h>

int main()
{
    int m, n;

    // Get matrix dimensions
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    // Declare matrices A, B, and the results (sum and difference)
    int A[m][n], B[m][n], sum[m][n], difference[m][n];

    // Input matrix A elements
    printf("Enter the elements of matrix A:\n");
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            printf("Enter element A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Input matrix B elements
    printf("Enter the elements of matrix B:\n");
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            printf("Enter element B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    printf("\nMatrix A:\n");
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix B:\n");
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }

    // Calculate sum (A+B) and difference (A-B)
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            sum[i][j] = A[i][j] + B[i][j];
            difference[i][j] = A[i][j] - B[i][j];
        }
    }

    // Print sum (A+B)
    printf("\nSum (A+B):\n");
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    // Print difference (A-B)
    printf("\nDifference (A-B):\n");
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            printf("%d\t", difference[i][j]);
        }
        printf("\n");
    }

    return 0;
}
