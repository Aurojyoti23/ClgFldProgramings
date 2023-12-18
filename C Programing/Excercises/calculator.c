#include <stdio.h>

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero is undefined.\n");
        return 0;
    }
}

float rem(float a, float b) {
    if (b != 0) {
        return (int)a % (int)b; 
    } else {
        printf("Error: Remainder for division by zero is undefined.\n");
        return 0;
    }
}

int main() {
    float num1, num2;
    char operator;

    printf("Enter Operand1: ");
    scanf("%f", &num1);

    printf("Enter operator (+, -, *, /, %): ");
    scanf(" %c", &operator);

    printf("Enter Operand2: ");
    scanf("%f", &num2);

    switch (operator) {
        case '+':
            printf("Result: %.2f\n", add(num1, num2));
            break;
        case '-':
            printf("Result: %.2f\n", subtract(num1, num2));
            break;
        case '*':
            printf("Result: %.2f\n", multiply(num1, num2));
            break;
        case '/':
            printf("Result: %.2f\n", divide(num1, num2));
            break;
        case '%':
            printf("Result: %.2f\n", remainder(num1, num2));
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}
