#include <stdio.h>

int main()
{
    int n;
    double sum = 0.0;

    printf("Enter nth term: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        // printf("1/%d", i);
        if (i == 1)
        {
            printf("1 + ");
        }
        else if (i == n)
        {
            printf("1/%d", i);
        }
        else
        {
            printf("1/%d + ", i);
        }

        sum += 1.0 / i;
    }

    printf("\nSum of the series up to %d terms: %lf\n", n, sum);

    return 0;
}
