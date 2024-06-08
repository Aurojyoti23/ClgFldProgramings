#include <stdio.h>
void main()
{
    int size1, size2;
    printf("Size1 : ");
    scanf("%d", &size1);
    int a1[size1];
    printf("elements array 1 : \n");
    for (int i = 0; i < size1; i++)
    {
        printf("Element %d : ", i + 1);
        scanf("%d", &a1[i]);
    }

    printf("Size2 : ");
    scanf("%d", &size2);
    int a2[size2];
    for (int i = 0; i < size2; i++)
    {
        printf("Element %d : ", i + 1);
        scanf("%d", &a1[i]);
    }
    int size3 = size1 + size2, a3[size3], i = 0, j = 0, k = 0;

    while (i < size1 && j < size2)
    {
        if (a1[i] < a2[j])
        {
            a3[k] = a1[i];
            i++;
        }
        else
        {
            a3[k] = a2[j];
            j++;
        }
        k++;
    }

    if (i < size1)
    {
        for (; i < size1; i++, k++)
        {
            a3[k] = a1[i];
        }
        if (j < size2)
        {
            for (; j < size2; j++, k++)
            {
                a3[k] = a2[j];
            }
        }
    }

    for (int l = 0; l < size3; l++)
    {
        printf("%d  ", a3[l]);
    }
}