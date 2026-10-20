#include <stdio.h>

int main(void)
{
    int number;
    int lastDigit;
    int sum = 0;

    printf("Enter an integer: ");

    if (scanf("%d", &number) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    while (number != 0)
    {
        lastDigit = number % 10;

        if (lastDigit < 0)
        {
            lastDigit *= -1;
        }

        sum += lastDigit;
        number /= 10;
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}
