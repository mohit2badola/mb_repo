//Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>  
int main()
{
    int num1, num2, sum, difference,quetiont, product;
    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter second integer: ");   
    scanf("%d", &num2);
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quetiont = num1 / num2;
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference); 
    printf("Product: %d\n", product);
    printf("Quotient: %d\n", quetiont);
    return 0;
}
