#include <stdio.h>
// #include <math.h>

int main()
{
    int n;
    float sum = 0.0;

    // Get user input for the maximum value of n
    printf("Enter the maximum value of n: ");
    scanf("%d", &n);

    // Print 2 to the power n for each n from 0 to the specified value
    for (int i = 1; i <= n; ++i)
    {
        sum = sum + 1.0 / i;
    }

    printf("s = 1 + ");
    for (int i = 2; i <= n; i++)
    {
        if (i < n)
        {
            printf("1/%d + ", i);
        }
        else{
            printf("1/%d = ", i);
        }
    }

    printf("%.2f", sum);

    return 0;
}
