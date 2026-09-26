#include <stdio.h>

int main(void)
{
    int number;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    while (number != 0)
    {
        count = count + 1;

        printf("Enter an integer: ");
        scanf("%d", &number);
    }

    printf("Count: %d\n", count);
    return 0;
}
