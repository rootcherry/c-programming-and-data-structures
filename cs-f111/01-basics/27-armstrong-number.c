#include <stdio.h>

int main(void)
{
    int number;
    int originalNumber;
    int count = 0;
    int lastDigit;
    int power = 1;
    int counter = 0;
    int sum = 0;

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

    originalNumber = number;

    if (number == 0)
    {
        count = 1;
    }
    else
    {
        while (number != 0)
        {
            number /= 10;
            count += 1;
        }
    }
    number = originalNumber;

    while (number != 0)
    {
        lastDigit = number % 10;

        power = 1;
        counter = 0;

        while (counter < count)
        {
            power *= lastDigit;
            counter++;
        }

        sum += power;

        number /= 10;
    }

    if (sum == originalNumber)
    {
        printf("Armstrong\n");
    }
    else
    {
        printf("Not an Armstrong number\n");
    }

    return 0;
}
