#include<stdio.h>
int main()
{
    int size, pos, elm;

    printf("Enter size of array : ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array: \n");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("enter the position to insert: ");
    scanf("%d", &pos);

    printf("enter the element to insert: ");
    scanf("%d", &elm);

    for (int i = size - 1; i >= pos; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos] = elm;
    size++;

    printf("Array after inserting %d at position %d : \n", elm, pos);

    for(int i = 0; i< size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    printf("enter the position to delete: ");
    scanf("%d", &pos);

    for(int i = pos; i <size-1; i++)
    {
        arr[i] = arr[i+1];
    }
    size--;
    printf("Array after deleting element at position %d : \n", pos);

    for(int i=0; i<size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    return 0;

}