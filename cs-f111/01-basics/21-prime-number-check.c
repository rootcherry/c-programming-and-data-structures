#include <stdio.h>

int main(void)
{
    int number;
    int dividers = 0;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    if (number < 2)
    {
        printf("Not prime\n");
        return 0;
    }

    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            dividers++;
        }
    }

    if (dividers == 2)
    {
        printf("Prime\n");
    }
    else
    {
        printf("Not prime\n");
    }

    return 0;
}
