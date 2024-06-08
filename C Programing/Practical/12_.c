// /* 12.
// Write a Program to perform following actions on an array entered by the user:
//  a) Print the even-valued elements
//  b) Print the odd-valued elements
//  c) Calculate and print the sum and average of the elements of array
//  d) Print the maximum and minimum element of array
//  e) Remove the duplicates from the array
//  f) Print the array in reverse order

// The program should present a menu to the user and ask for one of the options. The menu should also include options to re-enter array and to quit the program.
// */
// #include <stdio.h>

// void printEvenElements(int arr[], int size)
// {
//     printf("Even-valued elements: ");
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] % 2 == 0)
//         {
//             printf("%d ", arr[i]);
//         }
//     }
//     printf("\n");
// }

// void printOddElements(int arr[], int size)
// {
//     printf("Odd-valued elements: ");
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] % 2 != 0)
//         {
//             printf("%d ", arr[i]);
//         }
//     }
//     printf("\n");
// }

// void calculateSumAndAverage(int arr[], int size)
// {
//     int sum = 0;
//     for (int i = 0; i < size; i++)
//     {
//         sum += arr[i];
//     }
//     float average = (float)sum / size;
//     printf("Sum: %d\n", sum);
//     printf("Average: %.2f\n", average);
// }

// void printMaxAndMin(int arr[], int size)
// {
//     int max = arr[0];
//     int min = arr[0];
//     for (int i = 1; i < size; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//         if (arr[i] < min)
//         {
//             min = arr[i];
//         }
//     }
//     printf("Maximum element: %d\n", max);
//     printf("Minimum element: %d\n", min);
// }
// // Using pointers
// // void removeDuplicates(int arr[], int *size)
// // {
// //     for (int i = 0; i < *size; i++)
// //     {
// //         for (int j = i + 1; j < *size; j++)
// //         {
// //             if (arr[i] == arr[j])
// //             {
// //                 for (int k = j; k < *size - 1; k++)
// //                 {
// //                     arr[k] = arr[k + 1];
// //                 }
// //                 (*size)--;
// //                 j--;
// //             }
// //         }
// //     }
// // }
// // Not using pointers
// void removeDuplicates(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i + 1; j < size;)
//         {
//             if (arr[i] == arr[j])
//             {
//                 for (int k = j; k < size - 1; k++)
//                 {
//                     arr[k] = arr[k + 1];
//                 }
//                 size--;
//             }
//             else
//             {
//                 ++j;
//             }
//         }
//     }
// }

// void printArrayInReverse(int arr[], int size)
// {
//     printf("Array in reverse order: ");
//     for (int i = size - 1; i >= 0; i--)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// int main()
// {
//     int size;
//     printf("Enter the size of the array: ");
//     scanf("%d", &size);

//     int arr[size];
//     printf("Enter the array elements (space-separated): ");
//     for (int i = 0; i < size; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     char choice;
//     do
//     {
//         printf("\nMenu:\n");

//         printf("a) Print even-valued elements\n");
//         printf("b) Print odd-valued elements\n");
//         printf("c) Calculate and print sum and average\n");
//         printf("d) Print maximum and minimum element\n");
//         printf("e) Remove duplicates from the array\n");
//         printf("f) Print array in reverse order\n");
//         printf("r) To re-enter array\n");
//         printf("q) To quit\n");

//         printf("Enter your choice: ");
//         scanf(" %c", &choice);

//         switch (choice)
//         {
//         case 'a':
//             printEvenElements(arr, size);
//             break;
//         case 'b':
//             printOddElements(arr, size);
//             break;
//         case 'c':
//             calculateSumAndAverage(arr, size);
//             break;
//         case 'd':
//             printMaxAndMin(arr, size);
//             break;
//         case 'e':
//             removeDuplicates(arr, size);
//             printf("Array after removing duplicates: ");
//             for (int i = 0; i < size; i++)
//             {
//                 printf("%d ", arr[i]);
//             }
//             printf("\n");
//             break;
//         case 'f':
//             printArrayInReverse(arr, size);
//             break;
//         case 'r':
//             printf("Enter the array elements (space-separated): ");
//             for (int i = 0; i < size; i++)
//             {
//                 scanf("%d", &arr[i]);
//             }
//             break;
//         case 'q':
//             printf("Exiting the program. Goodbye!\n");
//             break;
//         default:
//             printf("Invalid choice. Please try again.\n");
//         }
//     } while (choice != 'q');

//     return 0;
// }






#include<stdio.h>

void main(){
    int i, j, size, duplicate, max, min, choice, sum=0;
    float avg;
    // char c;

    /* 12.
Write a Program to perform following actions on an array entered by the user:
 a) Print the even-valued elements
 b) Print the odd-valued elements
 c) Calculate and print the sum and average of the elements of array
 d) Print the maximum and minimum element of array
 e) Remove the duplicates from the array
 f) Print the array in reverse order

The program should present a menu to the user and ask for one of the options. The menu should also include options to re-enter array and to quit the program.
*/

    do {
        printf("\nEnter the size of the array : ");
        scanf("%d", &size);
        int arr[size];
        printf("\nEnter elements of array : ");
        for(i = 0; i < size; i++){
            scanf("%d", &arr[i]);
        }
        printf("Menu : \n\t1) Print the even-valued elements\n\t2) Print the odd-valued elements\n\t3) Calculate and print sum and average\n\t4) Print the max and min elements\n\t5) Remove duplicates from the array\n\t6) Print array in reverse order\n\t7) Quit\nEnter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Even valued elements are : ");
            for (i = 0; i < size; i++)
            {
                if (arr[i]%2 == 0)
                {
                    printf("%d ", arr[i]);
                }
            }
            break;

        case 2:
            printf("Odd valued elements are : ");
            for (i = 0; i < size; i++)
            {
                if (arr[i]%2 != 0)
                {
                    printf("%d ", arr[i]);
                }
                
            }
            break;
        case 3:
            


        default:
            break;
        }
    } while(choice != 7);
    


}