// #include <stdio.h>

// int main() {
//     int rows = 5;

//     // Loop for printing the rows
//     for (int i = 0; i < rows; i++) {

//         // Loop for printing leading whitespaces
//         for (int j = 0; j < 2 * (rows - i) - 1; j++) {
//             printf(" ");
//         }

//         // Loop for printing * character
//         for (int k = 0; k <= i; k++) {
//             printf("* ");
//         }

//         // Move to the next line
//         printf("\n");
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int rows;

    printf("Enter number of rows : ");
    scanf("%d", &rows);

    // for (int j = 0; j <= rows; j++)
    // {
    //     printf("%d ", j);
    // }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = rows - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 2 * (rows - i) - 1; j++){
            printf(" ");
        }

        for (int k = 0; k <= i; k++){
            printf("* ");
        }

        printf("\n");
    }


    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < rows; j++)
    //     {
    //         if (j < (rows - i) - 1)
    //         {
    //             printf(" ");
    //         }
    //         else{
    //             printf("* ");
    //         }

    //     }

    //     printf("\n");
    // }

    return 0;
}