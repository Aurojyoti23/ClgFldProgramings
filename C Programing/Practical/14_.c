#include<stdio.h>

void main(){
    int x, y, *p1, *p2, temp;
    printf("Enter first number : ");
    scanf("%d", &x);
    printf("Enter second number : ");
    scanf("%d", &y);
    printf("Before swapping : \n\tx = %d\n\ty = %d\n", x, y);

    p1 = &x;
    p2 = &y;

    temp = *p1;
    *p1  = *p2;
    *p2  = temp;

    printf("\nAfter swapping : \n\tx = %d\n\ty = %d", x, y);
}