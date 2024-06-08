#include<stdio.h>
int main()
{
    int arr[30];
    int size, key;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("enter %d elements :\n", size);
    for(int i = 0; i<size; ++i){
        scanf("%d", &arr[i]);

    }
    printf("Enter the elements to search: ");
    scanf("%d", &key);

    int count = 0;
    for(int i = 0; i<size; ++i)
    {
        if(arr[i]==key)
        {
            count++;
            
        }
    }
    if(count==0){
        printf("\n Element not found in the array : \n");
    }
    else{
        printf("\n total occurrences : %d\n", count);
    }
    return 0;



}