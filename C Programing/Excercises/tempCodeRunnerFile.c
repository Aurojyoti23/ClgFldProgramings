 < rows; i++)
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