#include <stdio.h>
#include <math.h>

int main() {
    int n;

    // Get user input for the maximum value of n
    printf("Enter the maximum value of n: ");
    scanf("%d", &n);

    // Print 2 to the power n for each n from 0 to the specified value
    for (int i = 0; i <= n; ++i) {
        printf("%d\t", (int)pow(2, i));
    }

    return 0;
}
