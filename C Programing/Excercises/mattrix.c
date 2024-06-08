#include <stdio.h>
// int main()
// {
//     int a[10][10], b[10][10], c[10][10], n, i, j, k;

//     printf("Enter the value of N (N <= 10): ");
//     scanf("%d", &n);
//     printf("Enter the elements of Matrix-A: \n");

//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             printf("Enter element (%d,%d)", i+1, j+1);
//             scanf("%d", &a[i][j]);
//         }
//     }

//     printf("Enter the elements of Matrix-B: \n");

//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             printf("Enter element (%d,%d)", i+1, j+1);
//             scanf("%d", &b[i][j]);
//         }
//     }

//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             c[i][j] = 0;
//             for (k = 0; k < n; k++)
//             {
//                 c[i][j] += a[i][k] * b[k][j];
//             }
//         }
//     }

//     printf("\nThe product of the two matrices is: \n");
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             printf(" %d\t", c[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Try it yourself  
// Notice that in the above program, we asked the user to enter the order of the matrix only once. It is because the multiplication of two square matrices of a different order is not possible.

// output

// Enter the value of N (N <= 10): 2
// Enter the elements of Matrix-A:
// 2 2
// 2 2
// Enter the elements of Matrix-B:
// 2 2
// 2 2
// Product of the two matrices is :
// 8       8
// 8       8

// When is the multiplication of two matrices possible?
/*
When the number of rows in the first matrix equals the number of rows in the second matrix.

When the number of columns in the first matrix equals the number of columns in the second matrix.

When the number of columns in the first matrix equals the number of rows in the second matrix.

When the matrices have the same number of elements.
*/

int main()
{
    int m, n, p, q, i, j, k;

    printf("Enter the order of first matrix\n");
    scanf("%d%d", &m, &n);
    printf("Enter the order of second matrix\n");
    scanf("%d%d", &p, &q);

    int a[m][n], b[p][q], res[m][q];

    if (n != p)
    {
        printf("Matrix is incompatible for multiplication\n");
    }
    else
    {
        printf("Enter the elements of Matrix-A:\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("Enter element (%d,%d) : ", i + 1, j + 1);
                scanf("%d", &a[i][j]);
            }
        }

        printf("Enter the elements of Matrix-B:\n");
        for (i = 0; i < p; i++)
        {
            for (j = 0; j < q; j++)
            {
                printf("Enter element (%d,%d) : ", i + 1, j + 1);
                scanf("%d", &b[i][j]);
            }
        }

        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                res[i][j] = 0;
                for (k = 0; k < p; k++)
                {
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        printf("The product of the two matrices is:-\n");

        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                printf("%d\t", res[i][j]);
            }
            printf("\n");
        }
    }
}