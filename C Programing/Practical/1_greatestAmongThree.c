#include <stdio.h>
int main()
{
    int a = 12, b = 54, c = 23;
    if (a > b && a > c)
    {
        printf("\nGreatest number is : %d\n", a);
    }
    else if (b > a && b > c)
    {
        printf("\nGreatest number is : %d\n", b);
    }
    else
    {
        printf("\nGreatest number is : %d\n", c);
    }
    return 0;
}