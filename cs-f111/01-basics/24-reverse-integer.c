#include <limits.h>
#include <stdio.h>

int main(void)
{
    int number;
    int lastDigit;
    int reversed = 0;

    printf("Enter an integer: ");

    if (scanf("%d", &number) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    while (number != 0)
    {
        lastDigit = number % 10;
        number /= 10;

        if (reversed > INT_MAX / 10 ||
            (reversed == INT_MAX / 10 && lastDigit > INT_MAX % 10))
        {
            printf("Reversed number exceeds the supported range.\n");
            return 1;
        }

        if (reversed < INT_MIN / 10 ||
            (reversed == INT_MIN / 10 && lastDigit < INT_MIN % 10))
        {
            printf("Reversed number exceeds the supported range.\n");
            return 1;
        }

        reversed = reversed * 10 + lastDigit;
    }

    printf("%d\n", reversed);

    return 0;
}
