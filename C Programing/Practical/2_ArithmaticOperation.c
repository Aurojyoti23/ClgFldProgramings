#include<stdio.h>
void main(){
    int c, a, b;
    printf("Enter operand 1 : ");
    scanf("%d", &a);
    printf("Enter operand 2 : ");
    scanf("%d", &b);
    printf("Enter operator :\n for +(1)\n for -(2)\n for *(3)\n for /(4)\n for %%(5) : ");
    scanf("%d", &c);
    switch(c){
        case 1:
            printf("Addition of a & b is : %d", a+b);
            break;
        case 2:
            printf("Subtraction of a & b is : %d", a-b);
            break;
        case 3:
            printf("Multiplication of a & b is : %d", a*b);
            break;
        case 4:
            printf("Division of a by b is : %%", a/b);
            break;
        case 5:
            printf("Remainder of a by b is : %d", a%b);
            break;
        default:
            printf("Invalid choice!, Enter between (1-5)");
    }
}
