#include <stdio.h>

int main(void)
{
    int firstNumber;
    int secondNumber;
    int thirdNumber;
    int max;
    int min;

    printf("Enter first number: ");
    scanf("%d", &firstNumber);

    printf("Enter second number: ");
    scanf("%d", &secondNumber);

    printf("Enter third number: ");
    scanf("%d", &thirdNumber);

    max = firstNumber;
    min = firstNumber;

    if (secondNumber > max)
    {
        max = secondNumber;
    }

    if (secondNumber < min)
    {
        min = secondNumber;
    }

    if (thirdNumber > max)
    {
        max = thirdNumber;
    }

    if (thirdNumber < min)
    {
        min = thirdNumber;
    }

    printf("\nMaximum: %d", max);
    printf("\nMinimum: %d\n", min);

    return 0;
}
