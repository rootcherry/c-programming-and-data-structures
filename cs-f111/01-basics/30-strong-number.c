#include <stdio.h>

int main(void)
{
    int number;
    int originalNumber;
    int temp;
    int digit;
    int fact;
    int sum = 0;

    printf("Enter a positive integer: ");
    if (scanf("%d", &number) != 1 || number <= 0)
    {
        printf("Invalid input.\n");
        return 1;
    }

    originalNumber = number;
    temp = number;

    while (temp > 0)
    {
        digit = temp % 10;

        fact = 1;

        for (int i = 1; i <= digit; i++)
        {
            fact *= i;
        }

        sum += fact;
        temp /= 10;
    }

    if (sum == originalNumber)
    {
        printf("%d is a strong number\n", originalNumber);
    }
    else
    {
        printf("%d is not a strong number\n", originalNumber);
    }

    return 0;
}
