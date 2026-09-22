#include <stdio.h>

int main(void)
{
    int number;
    int sum = 0;

    printf("Enter an integer: \n");
    scanf("%d", &number);

    while (number != 0)
    {
        sum = sum + number;

        printf("Enter an integer: \n");
        scanf("%d", &number);
    }

    printf("Sum: %d\n", sum);
    return 0;
}
