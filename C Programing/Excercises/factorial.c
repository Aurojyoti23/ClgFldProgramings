#include <stdio.h>

// ........  Normal Factorial  ........ //

// int main ()
// {
//     int num;

//     printf("Enter a number : ");
//     scanf("%d", &num);

//     if (num < 0)
//     {
//         printf("Factorial of a number is only for non negetive integers...");
//     }
//     else
//     {
//         int fact = 1;
//             // ..... Using for loop ..... //
//             // for(int i = 1; i <= num; i++)
//             // {
//             //     fact = fact * i;
//             // }

//             // ..... Using while loop ..... //
//             int i = num;
//             while(i >= 1 )
//             {
//                 fact = fact * i;
//                 i--;
//             }
//         printf("Factorial of %d is %d", num, fact);
//     }
//     return 0;
// }






// ........  Factorial using UDFs  ........ //

// int factorial(int);
// int main ()
// {
//     int num, fact;

//     printf("Enter a number : ");
//     scanf("%d", &num);

//     fact = factorial(num);

//     printf("Factorial of %d is %d", num, fact);

//     return 0;
// }

// int factorial(int num)
// {
//     int i = num, fact = 1;
//     if (num < 0)
//     {
//         printf("Factorial of a number is only for non negetive integers...");
//     }
//     else
//     {
//             // ..... Using for loop ..... //
//             // for(int i = 1; i <= num; i++)
//             // {
//             //     fact = fact * i;
//             // }

//             // ..... Using while loop ..... //

//             while(i >= 1 )
//             {
//                 fact = fact * i;
//                 i--;
//             }

//     }
//     return fact;
// }





// ........  Factorial using Recursion  ........ //

int factorial(int);
int main()
{
    int num, fact;

    printf("Enter a number : ");
    scanf("%d", &num);

    fact = factorial(num);

    printf("Factorial of %d is %d", num, fact);

    return 0;
}

int factorial(int num)
{
    int i = num, fact = 1;
    if (num < 0)
    {
        printf("Factorial of a number is only for non negetive integers...");
    }
    else if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}