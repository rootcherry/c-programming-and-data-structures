#include <stdio.h>
int main(void)
{
    int number;
    int sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        sum += i;
    }

    printf("Sum: %d\n", sum);

    return 0;
}
