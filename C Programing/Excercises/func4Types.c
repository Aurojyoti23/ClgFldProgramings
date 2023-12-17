#include <stdio.h>

        // .......  Arguments with Return Type  ....... //

        // int revNumber(int);
        // int revNumber(int n)
        // {
        //     int rem, rev = 0;
        //     while (n != 0)
        //     {
        //         rem = n % 10;
        //         rev = rev * 10 + rem;
        //         n /= 10;
        //     }

        //     return rev;
        // }
        // int main()
        // {
        //     int num, rev;
        //     printf("Enter a Number : ");
        //     scanf("%d", &num);

        //     rev = revNumber(num);
        //     printf("The reversed number is : %d", rev);

        //     return 0;
        // }




        // .......  Arguments with No Return Type  ....... //

        // int revNumber(int);
        // void revNumber(int n)
        // {
        //     int rem, rev = 0;
        //     while (n != 0)
        //     {
        //         rem = n % 10;
        //         rev = rev * 10 + rem;
        //         n /= 10;
        //     }
        //     printf("The reversed number is : %d", rev);
        // }
        // int main()
        // {
        //     int num, rev;
        //     printf("Enter a Number : ");
        //     scanf("%d", &num);

        //     revNumber(num);

        //     return 0;
        // }




        // .......  No Arguments with Return Type  ....... //

        // int revNumber(int);
        // int revNumber()
        // {
        //     int n, rem, rev = 0;
        //     printf("Enter a Number : ");
        //     scanf("%d", &n);

        //     while (n != 0)
        //     {
        //         rem = n % 10;
        //         rev = rev * 10 + rem;
        //         n /= 10;
        //     }

        //     return rev;
        // }
        // int main()
        // {
        //     int rev;

        //     rev = revNumber();
        //     printf("The reversed number is : %d", rev);

        //     return 0;
        // }




        // .......  No Arguments with No Return Type  ....... //

        // int revNumber(int);
        void revNumber()
        {
            int n, rem, rev ;
            printf("Enter a Number : ");
            scanf("%d", &n);

            while (n != 0)
            {
                rem = n % 10;
                rev = rev * 10 + rem;
                n /= 10;
            }
            printf("The reversed number is : %d", rev);

        }
        int main()
        {

            revNumber();

            return 0;
        }




















        // .......  From Chat GPT Programs  ....... //



// #include <stdio.h>

// int reverseWithArgument(int num) {
//     int reversed = 0;
//     while (num != 0) {
//         int digit = num % 10;
//         reversed = reversed * 10 + digit;
//         num /= 10;
//     }
//     return reversed;
// }

// int main() {
//     int number = 12345;
//     int reversedNumber = reverseWithArgument(number);
//     printf("Original number: %d\nReversed number: %d\n", number, reversedNumber);

//     return 0;
// }
