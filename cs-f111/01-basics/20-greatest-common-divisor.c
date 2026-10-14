#include <stdio.h>

int main(void)
{
    int firstNumber;
    int secondNumber;
    int gcd = 0;

    printf("Enter a first number: ");
    scanf("%d", &firstNumber);

    printf("Enter a second number: ");
    scanf("%d", &secondNumber);

    int limit = (firstNumber < secondNumber) ? firstNumber : secondNumber;

    for (int candidate = limit; candidate >= 1; candidate--)
    {
        if (firstNumber % candidate == 0 && secondNumber % candidate == 0)
        {
            gcd = candidate;
            break;
        }
    }

    printf("MDC: %d\n", gcd);

    return 0;
}
