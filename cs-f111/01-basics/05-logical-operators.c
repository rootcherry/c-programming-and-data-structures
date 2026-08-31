#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number < 0 || number > 100)
    {
        printf("Out of range\n");
    }
    else if (number == 0)
    {
        printf("Zero\n");
    }
    else if (number <= 49)
    {
        printf("Low\n");
    }
    else if (number <= 79)
    {
        printf("Medium\n");
    }
    else
    {
        printf("High\n");
    }

    return 0;
}
