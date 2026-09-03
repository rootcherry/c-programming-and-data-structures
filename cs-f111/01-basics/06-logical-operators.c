#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("Invalid\n");
    }
    else if (number > 30)
    {
        printf("Out of range\n");
    }
    else if (number == 0)
    {
        printf("Zero\n");
    }
    else if (number >= 1 && number <= 10)
    {
        printf("Low\n");
    }
    else if (number <= 20)
    {
        printf("Medium\n");
    }
    else
    {
        printf("High\n");
    }

    return 0;
}
