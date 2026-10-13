#include <stdio.h>

int main(void)
{
    int number;
    int sum = 0;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    for (int i = 1; i <= number; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }

    printf("Sum: %d\n", sum);

    return 0;
}
