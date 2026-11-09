#include <stdio.h>

int main(void)
{
    long long number;
    long long peak;
    int steps = 0;

    printf("Enter a positive integer: ");

    if (scanf("%lld", &number) != 1 || number <= 0)
    {
        printf("Invalid input.\n");

        return 1;
    }

    peak = number;

    printf("Sequence: %lld", number);

    while (number > 1)
    {
        if (number % 2 == 0)
        {
            number /= 2;
        }
        else
        {
            number = (3 * number) + 1;
        }

        if (number > peak)
        {
            peak = number;
        }

        steps++;
        printf(" -> %lld", number);
    }

    printf("\n");
    printf("Steps: %d\n", steps);
    printf("Peak: %lld\n", peak);

    return 0;
}
