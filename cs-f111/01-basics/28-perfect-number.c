#include <stdio.h>

int main(void)
{
    int number;
    int originalNumber;
    int sum = 0;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    if (number <= 0)
    {
        printf("Invalid input.\n");
        return 1;
    }

    originalNumber = number;

    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
        {
            sum += i;
        }
    }

    if (sum == originalNumber)
    {
        printf("Perfect number.\n");
    }
    else
    {
        printf("Not a perfect number.\n");
    }

    return 0;
}
