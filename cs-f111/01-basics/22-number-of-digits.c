#include <stdio.h>

int main(void)
{
    int number;
    int count = 0;

    printf("Enter an integer: ");

    if (scanf("%d", &number) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

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

    printf("Number of digits: %d\n", count);

    return 0;
}
