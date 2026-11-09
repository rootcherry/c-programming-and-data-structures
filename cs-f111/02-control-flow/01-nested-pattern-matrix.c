#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter a number: ");
    if (scanf("%d", &number) != 1 || number < 3 || number > 19 || number % 2 == 0)
    {
        printf("Invalid input.\n");
        return 1;
    }

    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < number; j++)
        {
            if (i == 0 || i == number - 1 || j == 0 || j == number - 1 || i == j || i + j == number - 1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
