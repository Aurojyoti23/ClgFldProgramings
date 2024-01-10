#include <stdio.h>

int main() {
    int rows;

    // Get user input for the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Loop for printing the rows
    for (int i = 0; i < rows; i++) {

        // Loop for printing leading spaces
        for (int j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }

        // Loop for printing * characters
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            if (j < (rows - i) - 1)
            {
                printf(" ");
            }
            else{
                printf("* ");
            }

        }

        printf("\n");
    }
    for (int i = rows - 1; i >= 0; i--) {

        // Loop for printing leading spaces
        for (int j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }

        // Loop for printing * characters
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }


    //     printf("\n");
    // for (int i = 0; i <= rows; i++)
    // {
    //     printf("* ");
    // }
    //     printf("\n");
    
    for (int i = rows - 1; i >= 0; i--)
    {
        for (int j = 0; j < rows; j++)
        {
            if (j < (rows - i) - 1)
            {
                printf(" ");
            }
            else{
                printf("* ");
            }

        }

        printf("\n");
    }

    return 0;
}
