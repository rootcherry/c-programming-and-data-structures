#include <stdio.h>

int main(void)
{
    int number;
    int digit;
    int lastDigit;
    int count = 0;

    printf("Enter an integer: ");

    if (scanf("%d", &number) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    if (number < 0)
    {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter the digit to count: ");
    if (scanf("%d", &digit) != 1)
    {
        printf("Invalid digit.\n");
        return 1;
    }

    if (digit < 0 || digit > 9)
    {
        printf("Invalid digit.\n");
        return 1;
    }

    if (number == 0 && digit == 0)
    {
        count = 1;
    }

    while (number != 0)
    {
        lastDigit = number % 10;

        if (lastDigit == digit)
        {
            count++;
        }

        number /= 10;
    }

    printf("Digit %d appears %d %s.\n", digit, count, (count == 1) ? "time" : "times");

    return 0;
}
