#include <stdio.h>

// ......   Without Using Recursion   ...... //

// int fibonacci(int n)
// {
//     int first = 0, second = 1, next;

//     printf("Fibonacci series upto %d terms : ", n);
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d  ", first); // 0  1   1   2   3   5   8   13  21
//         next = first + second; // 1  2   3   5   8   13  21  34  55
//         first = second;        // 1  1   2   3   5   8   13  21  34
//         second = next;         // 1  2   3   5   8   13  21  34  55
//     }
//     printf("\n");
// }

// ......   Using Recursion   ...... //

void fibonacci(int n)
{
    static int first = 0, second = 1, next;
    if (n > 0)
    {
        printf("%d  ", first); // 0  1   1   2   3   5   8   13  21
        next = first + second; // 1  2   3   5   8   13  21  34  55
        first = second;        // 1  1   2   3   5   8   13  21  34
        second = next;         // 1  2   3   5   8   13  21  34  55
        fibonacci(n - 1);
    }
}

// ......   Main Function   ...... //

int main()
{
    int nterm;

    printf("Enter n term : ");
    scanf("%d", &nterm);

    fibonacci(nterm);
}