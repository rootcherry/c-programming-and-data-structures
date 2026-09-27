#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}
