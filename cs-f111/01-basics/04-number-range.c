#include <stdio.h>

int main(void)
{
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("Negative\n");
    }
    else if (number == 0)
    {
        printf("Zero\n");
    }
    else
    {
        if (number >= 1 && number <= 10)
        {
            printf("Small Positive\n");
        }
        else if (number >= 11 && number <= 100)
        {
            printf("Medium Positive\n");
        }
        else
        {
            printf("Large Positive\n");
        }
    }

    return 0;
}
