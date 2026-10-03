#include <stdio.h>

int main(void)
{
    int number;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        if (i % 2 == 0)
        {
            count += 1;
        }
    }

    printf("Count: %d\n", count);

    return 0;
}
