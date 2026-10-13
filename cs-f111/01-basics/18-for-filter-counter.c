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

    for (int i = 1; i <= number; i++)
    {
        if (i % 3 == 0)
        {
            count += 1;
        }
    }

    printf("Count: %d\n", count);

    return 0;
}
