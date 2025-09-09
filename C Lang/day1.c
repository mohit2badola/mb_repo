//Q1 (User Inputs, Operations & Output)
#include <stdio.h>
int main() {
    int num1, num2, sum ;
    float quotient;

    // User inputs
    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter second integer: ");
    scanf("%d", &num2);

    // Operations
    sum = num1 + num2;
    printf("Sum: %d\n", sum);
    return 0;
}