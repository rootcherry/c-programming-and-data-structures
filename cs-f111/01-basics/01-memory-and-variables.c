#include <stdio.h>

int main(void)
{
    int firstNumber;
    int secondNumber;
    int thirdNumber;
    int sum;
    int average;
    int product;

    printf("Enter first number: ");
    scanf("%d", &firstNumber);
    printf("Enter second number: ");
    scanf("%d", &secondNumber);
    printf("Enter third number: ");
    scanf("%d", &thirdNumber);

    sum = firstNumber + secondNumber + thirdNumber;
    average = (firstNumber + secondNumber + thirdNumber) / 3;
    product = firstNumber * secondNumber * thirdNumber;

    printf("\nSum: %d\n", sum);
    printf("Average: %d\n", average);
    printf("Product: %d\n", product);

    return 0;
}
