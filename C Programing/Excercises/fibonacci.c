#include <stdio.h>

int fibonacci(int n)
{
    int first = 0, second = 1, next;

    printf("Fibonacci series upto %d terms : ", n);
    for(int i = 0; i < n; i++)
    {
        printf("%d  ", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
}

int main() 
{
    int nterm;

    printf("Enter n term : ");
    scanf("%d", &nterm);

    fibonacci(nterm);
}